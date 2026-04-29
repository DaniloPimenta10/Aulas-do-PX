#include <stdio.h>
#include <stdlib.h>

int* lineariza(int **mat, int n)
{
int s , i , j , cont;
s = (n*(n+1)) / 2;
i = 0;
j = 0;
cont = 0;
int *vetor = (int*) malloc(s * sizeof(int));

while (i != n)
{

while (j <= i)
{
vetor[cont] = mat[i][j];

cont++;
j++;
}
j = 0;
i++;
}

return vetor;
}


int main()
{

int n, tamanho;
printf("Digite o valor de n: ");
scanf("%d" , &n);


int **mat = (int **)malloc(n * sizeof(int *));
for (int i = 0; i < n; i++)
{
mat[i] = (int *)malloc(n * sizeof(int));
}


printf("Digite os valores da matriz:\n");

for (int i = 0; i < n; i++)
{
for (int j = 0; j < n; j++)
{
printf("mat[%d,%d]=", i, j);
scanf("%d", &mat[i][j]);
}
}

int *vetor = lineariza(mat, n);

tamanho = (n*(n+1))/2;

for (int k = 0; k < tamanho; k++)
{
printf("%d " , vetor[k]);
}

for(int l = 0; l < n; l++)
{
free(mat[l]);
}
free(mat);
free(vetor);

return 0;
}