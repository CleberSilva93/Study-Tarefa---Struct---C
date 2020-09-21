#include <stdio.h>
#include <locale.h>

struct {
    char nome[50];
    int ra;
    char curso[100];
} alunos[5];

void main(){
    setlocale(LC_ALL,"portuguese");
    int i;

  printf("--- Sistema de cadastro de alunos ---\n\n");
  printf("--- Cadastre os alunos com :\n");
  printf("Nome, Número da matrícula e curso.\n");

  for (i = 0; i < 5; i++)
  {
    setbuf (stdin,NULL);
    printf("--- %d - Aluno\n",i+1);
    printf("--- Nome\n---:>");
    fgets(alunos[i].nome, 49, stdin);
    fflush(stdin);
    setbuf (stdin,NULL);
    printf("--- Número da Matrícula\n---:>");
    scanf("%d", &alunos[i].ra);
    setbuf (stdin,NULL);
    printf("--- Curso\n---:>");
    fgets(alunos[i].curso, 99, stdin);
    printf("\n--- Próximo aluno ---\n");
  }

  printf("\n--- Alunos Cadastrados ---\n");

  for (i = 0; i < 5; i++)
  {
    printf("\n--- %d - Aluno\n",i+1);
    printf("--- Nome: %s",alunos[i].nome);
    printf("--- Número da Matrícula: %d\n", alunos[i].ra);
    printf("--- Curso: %s", alunos[i].curso);
  }
  return 0;
}
