#include <stdio.h>
#include <math.h>

void calc_info_retangulo(float alt , float lar ,float *area ,float *perimetro ,float *diagonal )
{
*area = alt * lar;
*perimetro = 2 * (alt + lar);
*diagonal = sqrt(pow(alt,2) + pow(lar,2));
}

int main()
{
float alt , lar;
float area , per , diag;

printf("Informe a altura e a largura do triângulo: ");
scanf("%f %f" , &alt , &lar);

calc_info_retangulo(alt, lar, &area, &per, &diag);

printf("Área = %.2f | Perímetro = %.2f | Diagonal = %.2f" , area, per, diag);


return 0;
}
