#include <stdio.h>
#include <locale.h>


struct aluno{
  int matricula;
  char nome[100];
  int codD;
  float n1;
  float n2;
};

int i;
struct aluno alunos[10];
void cadastro(){
      printf("Cadastro!\n");

    printf("Cadastre 10 alunos para poder exibir as notas\n");

    for ( i = 0; i < 10; i++)
    {
      setbuf (stdin,NULL);
      printf("%d - Aluno\n",i+1);
      printf("Matrícula\n:>");
      scanf("%d", &alunos[i].matricula);
      setbuf (stdin,NULL);
      printf("Nome\n:>");
      fgets(alunos[i].nome, 99, stdin);
      setbuf (stdin,NULL);
      printf("Código da Disciplina\n:>");
      scanf("%d", &alunos[i].codD);
      printf("Nota - 1\n:>");
      scanf("%f", &alunos[i].n1);
      printf("Nota - 2\n:>");
      scanf("%f", &alunos[i].n2);
    }
    return 0;
};
void notas() {
  printf("*** Listagem geral das médias ponderadas dos alunos ***\n");

  for (i = 0; i < 10; i++)
  {
    printf("\nMatricula: %d\n", alunos[i].matricula);
    printf("Nome: %s",alunos[i].nome);
    printf("Código da Disciplina: %d\n",alunos[i].codD);
    printf("Nota - 1: %0.2f\n",alunos[i].n1);
    printf("Nota - 2: %0.2f\n",alunos[i].n2);
    printf("Média ponderada %0.2f\n", ((alunos[i].n1*1.0)+(alunos[i].n2*2.0))/3.0);

  }
  return 0;
};
void main(){
    setlocale(LC_ALL,"portuguese");
    int cond;
    while (1) {
      printf("\n*** Escola Brasil++ ***\n");
      printf("Menu:\n 1 - Cadastrar alunos\n 2 - Exibir notas de alunos cadastrados\n 3 - Encerrar\n:>");
      scanf("%d", &cond);
      if(cond == 1){
       cadastro();
       notas();
      }else if ( cond == 2){
        notas();
      }else if(cond == 3) {
        break;
      } else {
        printf("Número inválido - Encerrado...\n");
        break;
      }
  }
  return 0;
}
