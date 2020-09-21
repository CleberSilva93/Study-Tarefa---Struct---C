#include <stdio.h>
#include <locale.h>

struct {
  char nome[100];
  char end[100];
  int telefone;
  float posic;
} pessoas[5];

float fibonnaci(float limiter){
  int i;
  float auxiliar, a=30.0, b=25.0;
      for(i = 0; i < limiter; i++) {

        auxiliar = a + b;
        a = b*10;
        b = auxiliar;
    }

    return auxiliar;
}

int main(){
    char alf[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};
    setlocale(LC_ALL,"portuguese");
    int i,j, h, ordem[5]={0,1,2,3,4},aux;
    float cont, alfn;


  printf("*** Cadastro de pessoas ***\n");
  for ( i = 0; i < 5; i++)
  {
    cont = 1.0;
    setbuf (stdin,NULL);
    printf("%d - Pessoa\n", i+1);
    printf("Nome\n:>");
    fgets(pessoas[i].nome, 99, stdin);
    setbuf (stdin,NULL);
    printf("Endereço\n:>");
    fgets(pessoas[i].end, 99, stdin);
    setbuf (stdin,NULL);
    printf("Telefone\n:>");
    scanf("%d", &pessoas[i].telefone);
    pessoas[i].posic = 0.0;
    for ( j = 0; j < strlen(pessoas[i].nome); j++)
    {
      for ( h = 0; h < strlen(alf); h++)
      {
        if (alf[h] == pessoas[i].nome[j]) {
             alfn = (float)h+1;
            break;
        }
      }
      if (cont == 0.0) {
        cont = 1.0;
      }
      printf("\nalf %f -- cont %f , alfn/n %f\n", alfn, cont, alfn/cont);
      pessoas[i].posic += alfn/cont;
      cont = fibonnaci(j+1);
    }
    printf("\n");
  }

  for ( i = 0; i < 5; i++)
  {
    for (j = i; j < 4; j++)
    {
      if(pessoas[ordem[j]].posic > pessoas[ordem[j+1]].posic){
        aux = ordem[j];
         ordem[j]= ordem[j+1];
         ordem[j+1]= aux;
      }
    }
  }

  printf("Os cadastrados são (Em ordem Alfabética)\n");
  for ( i = 0; i < 5; i++)
  {
    printf("Nome: %s", pessoas[ordem[i]].nome);
    printf("Endereço: %s", pessoas[ordem[i]].end);
    printf("Telefone: %d\n", pessoas[ordem[i]].telefone);
    printf("Posição: %f", pessoas[ordem[i]].posic);
    printf("\n\n");
  }
  return 0;
}
