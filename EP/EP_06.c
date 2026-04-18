#include <stdio.h>
#include <stdlib.h>

struct time 
{
int id;
char nome[50];
int pontos; 
};

typedef struct time Time;



int main()
{
Time *t = malloc(sizeof(Time));

printf("Digite o ID do time: \n");
scanf("%d" , &t->id);

printf("Digite o nome do time: \n");
scanf("%s" , t->nome);

printf("Digite o número de pontos do time: \n");
scanf("%d" , &t->pontos);


FILE *file = fopen("time.txt" , "w");

if (file == NULL)
{
    printf("Error opening file\n");
    return 1;
}

else
{
fprintf(file, "%d, %s, %d" , t->id , t->nome , t->pontos);
fclose(file);
}
free(t);


Time *t2 = malloc(sizeof(Time));

FILE *file2 = fopen("time.txt" , "r");

if (file2 == NULL)
{
    printf("Error opening file\n");
    return 1;
}

else
{
fscanf(file2, "%d, %s, %d" , &t2->id , t2->nome , &t2->pontos);
fclose(file2);
}

printf("ID = %d, Nome = %s, Pontos = %d" , t2->id , t2->nome , t2->pontos);
free(t2);

return 0;

}