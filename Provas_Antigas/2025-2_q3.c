#include <stdio.h>
#include <string.h>

void intercala_strings(const char *s1, const char *s2, char *dest)
{
int i , j , lens1 , lens2;
lens1 = strlen(s1) ;
lens2 = strlen(s2) ;
i = 0;
j = 0;

while (i != lens1&& j != lens2 )
{
dest[i + j] = s1[i];
i++;
dest[i + j] = s2[j];
j++;
}

if (i == lens1)
{
while (j != lens2)
{
dest[i + j] = s2[j];
j++;
}
}

if (j == lens2)
{
while (i != lens1)
{
dest[i + j] = s1[i];
i++;
}
}

}


int main() {
    // Strings de teste baseadas no seu exercício
    char s1[] = "Quarta";
    char s2[] = "Segunda";
    
    // O destino precisa ter tamanho suficiente: (6 + 7) + 1 para o '\0'
    // Vamos colocar um tamanho de 50 para garantir
    char resultado[50]; 

    // Chama a sua função
    intercala_strings(s1, s2, resultado);

    // Exibe o resultado para conferir
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    printf("Resultado intercalado: %s\n", resultado);

    return 0;
}