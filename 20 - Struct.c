#include <stdio.h>
#include <locale.h>

struct {
  char nome[25];
  struct {
    int qtd;
    char nome[100];
  } ingredientes[100];
}receitas[5];

void main(){
    setlocale(LC_ALL,"portuguese");
    int ingre,i, decisao, j, a;
    printf("\n***Alô novamente!***\n");
    printf("Este é seu livro de receitas\n");
    printf("Insirá 5 receitas em seu livro\n");
    for ( i = 0; i < 2; i++)
    {
      ingre=0;
      a=1;
      setbuf (stdin,NULL);
      printf("%d - Receita\n",i+1);
      printf("Nome da receita\n:>");
      fgets(receitas[i].nome, 24, stdin);
      setbuf (stdin,NULL);
      printf("\n*Ingredientes*\n");
      while (a==1){
          setbuf(stdin,NULL);
          printf("Nome do ingrediente\n:>");
          fgets(receitas[i].ingredientes[ingre].nome, 99, stdin);
          setbuf (stdin,NULL);
          printf("Quantidade\n:>");
          scanf("%d",&receitas[i].ingredientes[ingre].qtd);
          setbuf(stdin,NULL);
          printf("Cadastrar outro ingrediente? (1 - sim / 2 - não)\n:>");
          scanf("%d",&decisao);
          ingre++;
          if(decisao == 2){
            a=2;
          }
        }
         printf("\n---Próxima---\n");
    }
      printf("\nAs receitas deste livro são:\n");
      for (i = 0; i < 2; i++)
      {
        printf("Nome da Receita: %s",receitas[i].nome);
        printf("Ingredientes:\n");
        for ( j = 0; j < strlen(receitas[i].ingredientes)+1; j++)
        {
          printf("%d de %s", receitas[i].ingredientes[j].qtd, receitas[i].ingredientes[j].nome);
        }
        printf("\n-----------\n");
      }

    printf("\n--- Até a próxima receita :) ---\n");

  return 0;
}
