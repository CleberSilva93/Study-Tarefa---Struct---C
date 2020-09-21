#include <stdio.h>
#include <math.h>
#include <locale.h>

struct{
  float r;
  float a;
} polar;

struct{
  float x;
  float y;
} cartesiano;

int main()
{
    setlocale(LC_ALL,"portuguese");
    printf("Coordenada polar\n:>");
    scanf("%f", &polar.r);
    printf("Ângulo do raio\n:>");
    scanf("%f", &polar.a);
    printf("\n Polar:%0.2f Ângulo:%0.2f", polar.r, polar.a);
    cartesiano.x = polar.r * cos(polar.a);
    cartesiano.y = polar.r * sin(polar.a);
    printf("\n\nCoordenadas cartesianas: (%0.2f,%0.2f)", cartesiano.x, cartesiano.y);
    printf("\n\n");
    return 0;
}
