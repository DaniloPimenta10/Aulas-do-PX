#include <stdio.h>

int main()
{
int p1 , p2;

printf("Jogador 1, escolha (0, 1, 2): ");
scanf("%d" , &p1);

printf("Jogador 2, escolha (0, 1, 2): ");
scanf("%d" , &p2);

if (p1 == p2)
printf("Empate!\n");

else if (p1 + 1 == p2 || (p1 + 1 == 3 && p2 == 0))
printf("Vitória do jogador 2!\n");

else 
printf("Vitória do jogador 1!\n");

return 0; 
}