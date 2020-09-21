#include <stdio.h>
#include <locale.h>

struct {
  char nome[20];
  int qtdfilmes;
  struct {
    char nome[100];
    int ano;
    char duracao[100];
  } filmes[100];
} diretores[5];

void main(){
    setlocale(LC_ALL,"portuguese");
    int i,j;

    printf("\n*** Bem vindo a hollywood***\n");
    printf("Cadastre os melhores diretores e seus respectitivos filmes\n");
    for ( i = 0; i < 2; i++)
    {
      setbuf (stdin,NULL);
      printf("Nome do Diretor\n:>");
      fgets(diretores[i].nome, 19, stdin);
      setbuf (stdin,NULL);
      printf("Quantidade de filmes produzidos\n:>");
      scanf("%d",&diretores[i].qtdfilmes);
      setbuf(stdin,NULL);
      printf("Cadastre os filmes\n");
      for (j = 0; j < diretores[i].qtdfilmes; j++)
      {
        setbuf(stdin,NULL);
        printf("Nome do filme\n:>");
        fgets(diretores[i].filmes[j].nome, 99, stdin);
        setbuf(stdin,NULL);
        printf("Ano de lançamento\n:>");
        scanf("%d",&diretores[i].filmes[j].ano);
        setbuf(stdin,NULL);
        printf("Duração do filme (Ex: 2 Horas e 30 Minutos)\n:>");
        fgets(diretores[i].filmes[j].duracao, 99, stdin);
        setbuf(stdin,NULL);
        printf("\n-------\n");
      }
    }

    printf("\n\nOs Diretores cadastrados são\n\n");
    for ( i = 0; i < 2; i++)
    {
      printf("\n\n==========\n\n");
      printf("Nome do Diretor: %s", diretores[i].nome);
      printf("Dirigiu %d filme(s)\n", diretores[i].qtdfilmes);
      printf("Sendo ele(s)\n");
      printf("\n-------*-------\n");
      for (j = 0;j < diretores[i].qtdfilmes; j++)
      {
        printf("Nome do filme: %s",diretores[i].filmes[j].nome);
        printf("Ano de lançamento: %d\n",diretores[i].filmes[j].ano);
        printf("Duração do longa metragem: %s",diretores[i].filmes[j].duracao);

        printf("\n-------*-------\n");
      }
    }

    printf("\nPor hoje a lista é essa\nAté Breve :D\n");


  return 0;
}
