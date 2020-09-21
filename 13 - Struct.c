#include <stdio.h>
#include <locale.h>
#include <string.h>

struct {
  char nome[100];
  char loc[100];
  struct {
    int dia;
    int mes;
    int ano;
  }nas;
  char cidade[100];
  char email[100];
  char cep[10];
} pessoa;

void main(){
    setlocale(LC_ALL,"portuguese");
    int aroba=0,i,j;
    char noemail[11] = {';', '~', '´', '/', '?', '|', '+', '%','$', '#'};

    printf("\n**** Verificador de dados ****\n");
    printf("Digite seus dados pessoais\n");
    printf("- Nome -\n:>");
    fgets(pessoa.nome, 99, stdin);
    setbuf(stdin, NULL);
    printf("- Endereço -\n:>");
    fgets(pessoa.loc, 99, stdin);
    setbuf(stdin, NULL);
    printf("- Data de nascimento -\n");
    printf("- Dia -\n:>");
    scanf("%d", &pessoa.nas.dia);
    setbuf(stdin, NULL);
    printf("- Mês -\n:>");
    scanf("%d", &pessoa.nas.mes);
    setbuf(stdin, NULL);
    printf("- Ano -\n:>");
    scanf("%d", &pessoa.nas.ano);
    setbuf(stdin, NULL);
    printf("- Cidade -\n:>");
    fgets(pessoa.cidade, 99, stdin);
    setbuf(stdin, NULL);
    printf("- CEP (Apenas números) -\n:>");
    fgets(pessoa.cep, 9, stdin);
    setbuf(stdin, NULL);
    printf("- E-mail -\n:>");
    fgets(pessoa.email, 99, stdin);
    setbuf(stdin, NULL);

    if((pessoa.nas.dia > 0) || (pessoa.nas.dia <= 31) || (pessoa.nas.mes <= 12) || (pessoa.nas.mes >= 0) || (pessoa.nas.ano <= 0)){
      printf("- Data de Nascimento Inválida -\n");
    }
     if (!((strlen(pessoa.cep) > 0) & (strlen(pessoa.cep) <= 8))){
      printf("- CEP inválido -\n");
    }

    for (i = 0; i < strlen(pessoa.email); i++)
    {
          if('@' == pessoa.email[i]){
            aroba++;
          }
          if((i == strlen(pessoa.email)) & aroba==0){
            printf("\n- Email Inválido -\n");
            break;
          }
        for (j = 0; j < 10; j++)
            {
              if(pessoa.email[i] == noemail[j]){
                printf("- Email inválido -\n");
                break;
              }
            }
    }
    if(aroba!= 1){
      printf("- Email Inválido -\n");
    }


    printf("\n**** Encerrando... ****\n");


  return 0;
}
