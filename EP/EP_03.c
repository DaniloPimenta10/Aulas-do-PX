#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int i = 0, n, p1, empate = 0, vit1 = 0, vit2 = 0;
int p2 , escp2;

srand(time(NULL));

printf("Quantas partidas quer jogar: ");
scanf("%d" , &n);

while (i != n)
{
printf("Jogador 1, escolha (0, 1, 2): ");
scanf("%d" , &p1);

p2 = rand() % 100;

if (p2 >= 0 && p2 <= 50)
escp2 = 0;

else if (p2 >= 51 && p2 <= 75)
escp2 = 1;

else
escp2 = 2;

if (p1 == escp2)
{
printf("Empate!\n");
empate++;
}

else if (p1 + 1 == escp2 || (p1 + 1 == 3 && escp2 == 0))
{
printf("Vitória do jogador 2!\n");
vit2++;
}

else 
{
printf("Vitória do jogador 1!\n");
vit1++;
}
i++;
}

printf("Total de vitórias do humano: %d \n" , vit1);
printf("Total de vitórias do computador: %d \n" , vit2);
printf("Total de empates: %d" , empate);

return 0; 
}