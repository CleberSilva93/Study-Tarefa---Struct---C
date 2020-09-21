#include <stdio.h>
#include <locale.h>
#include <string.h>

struct {
    char nome[50];
    int ra;
    char curso[100];
    float n1;
    float n2;
    float media;
    char aprovac[20];
} alunos[5];

void main(){
    setlocale(LC_ALL,"portuguese");
    int i, p1maior=0, maiormedia=0, menormedia=99;
    char alunomediamaior[50], alunomediamenor[50], alunomaiorp1[50];

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
    printf("--- Nota da primeira prova\n---:>");
    scanf("%f", &alunos[i].n1);
    printf("--- Nota da segunda prova\n---:>");
    scanf("%f", &alunos[i].n2);
    alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2.0;
    if (alunos[i].media > maiormedia) {
      maiormedia = alunos[i].media;
      strcpy(alunomediamaior, alunos[i].nome);
    }
    if (alunos[i].media > maiormedia) {
      menormedia = alunos[i].media;
      strcpy(alunomediamenor, alunos[i].nome);
    }
    if (alunos[i].media > 6) {
      strcpy(alunos[i].aprovac, "Aprovado");
    } else {
      strcpy(alunos[i].aprovac, "Reprovado");
    }
    if(alunos[i].n1 > p1maior){
      p1maior = alunos[i].n1;
      strcpy(alunomaiorp1, alunos[i].nome);
    }
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
  printf("\n--- Aluno com maior p1 foi ---\n");
  printf("Foi o aluno %scom a nota %d", alunomaiorp1, p1maior);
  printf("\n--- Aluno com maior média geral ---\n");
  printf("Foi o aluno %scom média geral %d", alunomediamaior, maiormedia);
  printf("\n--- Aluno com a menor média geral ---\n");
  printf("Foi o aluno %scom media geral %d", alunomediamenor, menormedia);
  return 0;
}
