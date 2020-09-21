#include <stdio.h>
#include <locale.h>

struct {
  char nome[100];
  int idade;
  char sexo[20];
  char cpf[20];
  char nas[16];
  int setor;
  char cargo[30];
  float salario;

}funcionario;

void main(){
  setlocale(LC_ALL,"portuguese");

  printf("-- Cadastro de funcionário da empresa\n");

  printf("Nome\n:>");
  fgets(funcionario.nome, 99, stdin);
  setbuf (stdin,NULL);

  printf("Idade\n:>");
  scanf("%d", &funcionario.idade);
  setbuf (stdin,NULL);

  printf("Sexo (M/F)\n:>");
  fgets(funcionario.sexo, 19, stdin);
  setbuf (stdin,NULL);

  printf("CPF (123.456.789-01)\n:>");
  fgets(funcionario.cpf, 19, stdin);
  setbuf (stdin,NULL);

  printf("Data de Nascimento (12/34/4567)\n:>");
  fgets(funcionario.nas, 15, stdin);
  setbuf (stdin,NULL);

  printf("Código do setor\n:>");
  scanf("%d",&funcionario.setor);
  setbuf (stdin,NULL);

  printf("Cargo\n:>");
  fgets(funcionario.cargo, 29, stdin);
  setbuf (stdin,NULL);

  printf("Salário\n:>");
  scanf("%f", &funcionario.salario);


  printf("\nFuncionário Cadastro foi:\n");
  printf("Nome: %s", funcionario.nome);
  printf("Idade: %d\n", funcionario.idade);
  printf("Sexo: %s", funcionario.sexo);
  printf("CPF: %s", funcionario.cpf);
  printf("Data de Nascimento: %s", funcionario.nas);
  printf("Código do setor: %d\n", funcionario.setor);
  printf("Cargo: %s", funcionario.cargo);
  printf("Salário: %0.3f", funcionario.salario);


  return 0;
}
