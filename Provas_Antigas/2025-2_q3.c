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

