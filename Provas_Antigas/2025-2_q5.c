#include <stdlib.h>

float *flatten_matrix(int rows, int cols, float **A)
{
float *vetor = (float*) malloc((rows*cols) * sizeof(float));
if (vetor == NULL)
{
return NULL; 
}
int cont = 0;

for (int i = 0; rows > i; i++)
{

for (int j = 0; cols > j; j++)
{
vetor[cont] = A[i][j];

cont++;
}

}
return vetor;
}