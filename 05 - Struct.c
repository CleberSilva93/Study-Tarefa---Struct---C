#include <stdio.h>
#include <locale.h>

struct vetor{
  float x;
  float y;
  float z;
} vetor[3];

void main(){
    setlocale(LC_ALL,"portuguese");
    int i;


    printf("-- Calculando os vetores --\n");
    printf("-- Somar dois vetores    --\n");

    printf("Digite 2 vetores com coordenadas - x - y - z\n");
    for ( i = 0; i < 2; i++)
    {
      printf("%d - Vetor\n", i+1);
      printf("- Coordenada X \n:> ");
      scanf("%f", &vetor[i].x);
      printf("- Coordenada Y \n:> ");
      scanf("%f", &vetor[i].y);
      printf("- Coordenada Z \n:> ");
      scanf("%f", &vetor[i].z);
    }

    vetor[2].x = vetor[0].x+vetor[1].x;
    vetor[2].y = vetor[0].y+vetor[1].y;
    vetor[2].z = vetor[0].z+vetor[1].z;


    printf("A soma do Vetor[1] + Vetor[2] = Vetor[3] (%0.2f, %0.2f, %0.2f).", vetor[2].x, vetor[2].y, vetor[2].z);

  return 0;
}
