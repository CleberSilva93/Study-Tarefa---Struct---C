#include <stdio.h>
#include <locale.h>
#include <string.h>

struct{
  char nome[100];
  int matricula;
  float mediafinal;
}alunos[10];

struct{
  char nome[100];
  int matricula;
  float mediafinal;
}aprovados[10];

struct{
  char nome[100];
  int matricula;
  float mediafinal;
}reprovados[10];


int main(){
    setlocale(LC_ALL,"portuguese");
    int aprovadoscontador=0, reprovadoscontador=0, i;

    printf("*** Cadastro os alunos ***\n");
    for ( i = 0; i < 10; i++)
    {
      printf("\n%d - Aluno\n",i+1);
      setbuf (stdin,NULL);
      printf("Nome\n:>");
      fgets(alunos[i].nome, 99, stdin);
      setbuf (stdin,NULL);
      printf("Matrícula\n:>");
      scanf("%d",&alunos[i].matricula);
      setbuf (stdin,NULL);
      printf("Média final\n:>");
      scanf("%f",&alunos[i].mediafinal);
    }

    for ( i = 0; i < 10; i++)
    {
      if(alunos[i].mediafinal >= 5.0){
        strcpy(aprovados[aprovadoscontador].nome, alunos[i].nome);
        aprovados[aprovadoscontador].matricula = alunos[i].matricula;
        aprovados[aprovadoscontador].mediafinal = alunos[i].mediafinal;
        aprovadoscontador++;
      }
    }


    for ( i = 0; i < 10; i++)
    {
      if(alunos[i].mediafinal < 5.0){
        strcpy(reprovados[reprovadoscontador].nome, alunos[i].nome);
        reprovados[reprovadoscontador].matricula = alunos[i].matricula;
        reprovados[reprovadoscontador].mediafinal = alunos[i].mediafinal;
        reprovadoscontador++;
      }
    }

    printf("\nAlunos Aprovados\n");
    for ( i = 0; i < aprovadoscontador; i++)
    {
      printf("Nome: %s",aprovados[i].nome);
      printf("Matricula: %d\n",aprovados[i].matricula);
      printf("Média final: %0.2f\n",aprovados[i].mediafinal);

    }

    printf("\nAlunos Reprovados\n");
    for ( i = 0; i < reprovadoscontador; i++)
    {
      printf("Nome: %s",reprovados[i].nome);
      printf("Matricula: %d\n",reprovados[i].matricula);
      printf("Média final: %0.2f\n",reprovados[i].mediafinal);

    }


  return 0;
}
