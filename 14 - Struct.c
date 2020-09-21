#include <stdio.h>
#include <locale.h>

struct{
  char marca[15];
  int ano;
  float preco;
}carros[5];

int main(){
    setlocale(LC_ALL,"portuguese");
    int i;
    float p=1;

  printf("** Classificados - Carros **\n");

  printf("Cadastre os carros a serem comparados\n");
  for ( i = 0; i < 5; i++)
  {
    setbuf (stdin,NULL);
    printf("%d - Carro\n",i+1);
    printf("Marca\n:>");
    fgets(carros[i].marca, 14, stdin);
    setbuf (stdin,NULL);
    printf("Ano\n:>");
    scanf("%d",&carros[i].ano);
    setbuf (stdin,NULL);
    printf("Preço\n:>");
    scanf("%f",&carros[i].preco);
  }

  while (p > 0){
    setbuf (stdin,NULL);
    printf("\nDigite valor para filtrar os carros -- 0 para Finalizar --\n:>");
    scanf("%f",&p);

    for ( i = 0; i < 5; i++)
    {
      if (carros[i].preco <= p){
        printf("Marca %s",carros[i].marca);
        printf("Ano %d\n",carros[i].ano);
        printf("Preço %0.2f\n",carros[i].preco);
        printf("--------------\n");
      }
    }
  }
  printf("\n\n----------- Encerrando... -----------");
  return 0;
}
