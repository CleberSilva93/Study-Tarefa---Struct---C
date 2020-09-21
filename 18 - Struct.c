#include <stdio.h>
#include <locale.h>
// #include <windows.h>
struct{
  int codigo;
  int qtd;
  char nome[15];
  float preco;
} produto[5];

struct{
  int cod;
  int produtos[10];
  int qtd[10];
} ped;

void cadastrar(){
  int i;
  printf("\nCadastrar Produtos\n");
  for ( i = 0; i < 5; i++)
  {
    printf("%d - Produto\n",i+1);
    printf("Código:> %d\n",i+1);
    produto[i].codigo = i;
    setbuf (stdin,NULL);
    printf("Nome\n:>");
    fgets(produto[i].nome, 14, stdin);
    setbuf (stdin,NULL);
    printf("Preço\n:>");
    scanf("%f", &produto[i].preco);
    setbuf (stdin,NULL);
    printf("Quantidade em estoque\n:>");
    scanf("%d",&produto[i].qtd);
    setbuf (stdin,NULL);
  }
}

void pedido(){
    printf("\nFaça seu pedido\n");
    int i;
    float total=0.0;
    printf("Escolha os 10 Produtos que deseja\n");
    for ( i = 0; i < 10; i++)
    {
      if(strlen(produto[0].nome) == 0){
        printf("Não há produtos cadastrados\n");
        return 0;
      }
      printf("| %d | - %s", produto[i].codigo+1,produto[i].nome);
    }
    printf("Escolha os produtos pelo seu código\n:>");
    for (i = 0; i < 10; i++)
    {
        printf("Código do produto\n:>");
        scanf("%d",&ped.produtos[i]);
        printf("Quantidade\n:>");
        scanf("%d",&ped.qtd[i]);
        while (1){
          if(produto[ped.produtos[i]-1].qtd - ped.qtd[i] > 0){
            printf("Próximo\n:>");
            break;
          } else{
            printf("A quantidade em estoque é insulficiente\n:>");
            printf("Quantidade disponível %d\n", produto[ped.produtos[i]-1].qtd);
            printf("Tente novamente.\n");
            printf("Código do produto\n:>");
            scanf("%d",&ped.produtos[i]);
            printf("Quantidade\n:>");
            scanf("%d",&ped.qtd[i]);
          }
        }
    }

    printf("\n*** Produtos selecionados ***\n");
    printf("Valor total da sua compra é...\n");
    printf("\nCalculando...");
    // Sleep(1000);
    for ( i = 0; i < 10; i++)
    {
      total += produto[ped.produtos[i]-1].preco * ped.qtd[i];
    }
    printf("\nR$ %0.2f\n", total);
  return 0;
}

void main(){
    setlocale(LC_ALL,"portuguese");
    int a=1, escolha;

    printf("\n*** Estoque do Mercadinho ***\n");
  while(a==1){
      printf("\n\n<Menu>\n\n");
      printf("<1 - Cadastrar Produtos>\n");
      printf("<2 - Fazer um pedido>\n");
      printf("<3 - Encerrar>\n");
      printf(":>");
      scanf("%d",&escolha);
      switch (escolha)
      {
      case 1:
        cadastrar();
        break;
      case 2:
        pedido();
        break;
      case 3:
        a=2;
        break;

      default:
        break;
      }
  }
  return 0;
}
