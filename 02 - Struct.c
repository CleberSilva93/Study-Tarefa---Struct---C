#include <stdio.h>
#include <locale.h>

struct {
    char nome[50];
    int idade;
    char adress[100];
} pessoa;

void main(){
    setlocale(LC_ALL,"portuguese");
    printf("Sistema de cadastro de cliente.\n");

    printf("Digite abaixo, nome, idade e endereco.\n");
    setbuf (stdin,NULL);
    printf("Nome :> ");
    fgets(pessoa.nome, 49, stdin);
    printf("Idade :> ");
    scanf("%d", &pessoa.idade);
    setbuf (stdin,NULL);
    printf("Endereco :> ");
    fgets(pessoa.adress, 99, stdin);
    printf("Cadastro Realizado\nNome: %sIdade: %d \nEndereco: %s", pessoa.nome, pessoa.idade, pessoa.adress);

  return 0;
}
