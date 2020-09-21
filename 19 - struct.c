#include <stdio.h>
#include <locale.h>
#include<stdbool.h>
#include<stdlib.h>

struct {
  int cod;
  char num[100];
  int codori;
  int coddest;
} voos[5];

struct {
  int cod;
  char nome[100];
  int saida;
  int entrada;
} aeroportos[5];

void painel(){
  int i,j;
  printf("\nPainel de voos\n");
  for (i = 0; i < 5; i++)
  {
      printf("\n\nAeroporto %d\n",aeroportos[i].nome);
      printf("Houve %d entradas\n",aeroportos[i].entrada);
      for ( j = 0; j < 5; j++)
      {
        if (voos[j].coddest = i){
            printf("Voo %d\n",voos[i].cod+1);
            printf("Número do voo %s",voos[i].num);
            printf("\n---------\n");
        }
      }
      printf("Houve %d saídas\n",aeroportos[i].saida);
      for ( j = 0; j < 5; j++)
      {
        if (voos[j].codori = i){
            printf("Voo %d\n",voos[i].cod+1);
            printf("Número do voo %s",voos[i].num);
            printf("\n---------\n");
        }
      }
  }

  return 0;
}

void cadastraraeroporto(){
  int i;
  printf("\n***Cadastrar aeroportos***\n");
  for ( i = 0; i < 5; i++)
  {
    setbuf (stdin,NULL);
    printf("%d - Aeroporto\n", i+1);
    printf("Código: %d\n", i+1);
    aeroportos[i].cod = i;
    setbuf (stdin,NULL);
    printf("Nome do aeroporto\n:>");
    fgets(aeroportos[i].nome, 99, stdin);
    setbuf (stdin,NULL);
    printf("\n---Próximo---\n");
  }
  return 0;
}

bool buscar_aeropo(int aero){
  int i, contador;
    for ( i = 0; i < 5; i++)
    {
      if (aeroportos[i].cod == aero){
        contador++;
      }
    }
    if(contador > 0){
      return true;
    } else {
      printf("Aeroporto não encontrado");
      return false;
    }
  return 0;
}

void cadastrarvoos(){
  int i;
  printf("\n***Cadastro de voos***\n");
  printf("Aeroportos disponíveis:\n");
    for ( i = 0; i < 5; i++)
    {
      if(strlen(aeroportos[0].nome) == 0){
        printf("Não há aeroportos cadastrados\n");
        return 0;
      }
      printf("| %d | - %s", aeroportos[i].cod+1,aeroportos[i].nome);
    }

    printf("\n\n");

    for ( i = 0; i < 5; i++)
    {
      setbuf (stdin,NULL);
      printf("%d - Voo\n",i+1);
      printf("Código: %d\n",i+1);
      voos[i].cod = i;
      setbuf (stdin,NULL);
      printf("Número do vôo (Ex: IB3506)\n:>");
      fgets(voos[i].num, 99, stdin);
      setbuf (stdin,NULL);
      printf("Código do aeroporto de origem\n:>");
      scanf("%d", &voos[i].codori);
      setbuf (stdin,NULL);
      while (!buscar_aeropo(voos[i].codori));
      printf("Código do aeroporto de destino\n:>");
      scanf("%d",&voos[i].coddest);
      setbuf (stdin,NULL);
      while (!buscar_aeropo(voos[i].coddest));
      aeroportos[voos[i].codori].saida++;
      aeroportos[voos[i].coddest].entrada++;
    }

    return 0;

}

void main(){
  setlocale(LC_ALL,"portuguese");
  int a=1,escolha;

  printf("\n***Controle de tráfego aéreo***\n");

  while (a==1){
    printf("\n<Menu>\n");
    printf("1 - Cadastrar voos\n");
    printf("2 - Cadastrar aeroportos\n");
    printf("3 - Painel de voos de cada Aeroporto\n");
    printf("4 - Encerrar\n");
    printf(":>");
    scanf("%d",&escolha);
    switch (escolha)
      {
      case 1:
        cadastrarvoos();
        break;
      case 2:
        cadastraraeroporto();
        break;
      case 3:
        painel();
        break;
      case 4:
        a=2;
        break;
      default:
        break;
      }
  }
  printf("\n***Encerrando Sistema...***\n");

  return 0;
}
