#include <stdio.h>
#include <locale.h>


struct{
  char nome[100];
  char email[100];
  char loc[100];
  char tel[30];
  struct {
    int dia;
    int mes;
    int ano;
  } data;
  char obs[100];
  float posic;
} agenda[100];

int ult=0;


void exibircontato(int num, int escolha ){
       if (escolha == 2) {
          printf("\n- Contato -\n");
          printf("Nome: %s", agenda[num].nome);
          printf("E-mail: %s", agenda[num].email);
          printf("Telefone: %s", agenda[num].tel);
          printf("\n***----------***\n");
      } else {
          printf("\n- Contato -\n");
          printf("Nome: %s", agenda[num].nome);
          printf("E-mail: %s", agenda[num].email);
          printf("Endereço: %s", agenda[num].loc);
          printf("Telefone: %s", agenda[num].tel);
          printf("Data de Nascimento: %d/%d/%d\n", agenda[num].data.dia, agenda[num].data.mes, agenda[num].data.ano);
          printf("Observações: %s\n", agenda[num].obs);
          printf("\n***----------***\n");
      }

      return 0;
}

float fibonnaci(float limiter){
  int i;
  float auxiliar, a=30.0, b=25.0;
      for(i = 0; i < limiter; i++) {

        auxiliar = a + b;
        a = b*10;
        b = auxiliar;
    }

    return auxiliar;
}

void cad(){
    char alf[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};
    int escolha=1, i, j, alfn, h, cont;
    printf("\n%d", ult);
    setbuf (stdin,NULL);
    printf("\n\n*** Cadastro de Contato ***\n\n");
    printf("Digite os dados da pessoa\n");
    printf("Nome\n:>");
    fgets(agenda[ult].nome, 100, stdin);
    setbuf (stdin,NULL);
    printf("Email\n:>");
    fgets(agenda[ult].email, 99, stdin);
    setbuf (stdin,NULL);
    printf("Endereço\n:>");
    fgets(agenda[ult].loc, 99, stdin);
    setbuf (stdin,NULL);
    printf("Telefone\n:>");
    fgets(agenda[ult].email, 30, stdin);
    setbuf (stdin,NULL);
    printf("Data de Nascimento\n");
    printf("Dia\n:>");
    scanf("%d", &agenda[ult].data.dia );
    setbuf (stdin,NULL);
    printf("Mês\n:>");
    scanf("%d", &agenda[ult].data.mes );
    setbuf (stdin,NULL);
    printf("Ano\n:>");
    scanf("%d", &agenda[ult].data.ano );
    setbuf (stdin,NULL);
    printf("Observações\n:>");
    fgets(agenda[ult].obs, 30, stdin);
    setbuf (stdin,NULL);
    cont = 1.0;
    agenda[ult].posic = 0.0;
    for ( j = 0; j < strlen(agenda[ult].nome); j++)
    {
      for ( h = 0; h < strlen(alf); h++)
      {
        if (alf[h] == tolower(agenda[ult].nome[j])) {
             alfn = (float)h+1;
            break;
        }
      }
      if (cont == 0.0) {
        cont = 1.0;
      }
      agenda[ult].posic += alfn/cont;
      cont = fibonnaci(j+1);
    }
    printf("\nContato inserido!\n");
    ult++;
    return 0;
}

void p_nome(){
    char nome[100];

    int retornos=0, tam = ult, i;
    printf("\n\n*** Buscar por Nome ***\n\n");
    setbuf(stdin, NULL);
    printf("Digite o Nome\n:>");
    fgets(nome, 99, stdin);
    for (i = 0; i < tam+1; i++)
    {
      if (strcmp(agenda[i].nome, nome) == 0 ){
          exibircontato(i, 1);
          retornos++;
      } else {
        if ((i+1 == tam) & (retornos == 0)) {
            printf("\nContato não encontrado!\n");
         }
      }

    }
    return 0;
}

void p_mes(){
    int tam = ult, i, mes, retornos=0;
    printf("\n\n*** Buscar pelo mês de aniverário ***\n\n");

    printf("Digite o Mês\n:>");
    scanf("%d", &mes);

    for (i = 0; i < tam+1; i++)
    {
      if (agenda[i].data.mes == mes ){
          exibircontato(i, 1);
          retornos++;
      } else {
        if ((i+1 == tam) & (retornos == 0)) {
            printf("\nContato não encontrado!\n");
         }
      }
    }
    return 0;
}

void p_dia_mes(){
    int tam = ult, i, mes,dia, retornos=0;
    printf("\n\n*** Buscar pelo mês de aniverário ***\n\n");
    printf("Digite o dia(1-31)\n:>");
    scanf("%d", &dia);
    printf("Digite o Mês(1-12)\n:>");
    scanf("%d", &mes);

    if ((0 > mes < 13) & (0 > dia < 32)){
      for (i = 0; i < tam+1; i++)
      {
        if ((agenda[i].data.mes == mes) & (agenda[i].data.dia == dia)){
            exibircontato(i, 1);
        } else {
        if ((i+1 == tam) & (retornos == 0)) {
            printf("\nContato não encontrado!\n");
         }
        }
      }
    } else {
      printf("\nDia/mês inválido\n");
    }
    return 0;
}


void list_ordem_alf(){
    int i, ordem[ult+1], j, aux;
    printf("\n\n*** Lista de Contatos ***\n\n");

    for (i = 0; i < ult; i++)
    {
      ordem[i] = i;
    }

    for ( i = 0; i < ult; i++)
    {
      printf("\n %d\n", ordem[i]);
    }


    for ( i = 0; i < ult; i++)
      {
        for (j = i; j < ult-1; j++)
        {
          if(agenda[ordem[j]].posic > agenda[ordem[j+1]].posic){
            aux = ordem[j];
            ordem[j]= ordem[j+1];
            ordem[j+1]= aux;
          }
        }
      }
    for ( i = 0; i < ult; i++)
    {
        exibircontato(ordem[i], 1);

    }

    return 0;
}

void excluircontato(){
    char escolha[11], nome[100];
    int cont=ult, i, j, retornos=0;
    setbuf(stdin,NULL);
    printf("\n\n*** Remover o contato da agenda ***\n\n");
    printf("Digite o nome do contato\n:>");
    fgets(nome, 99,stdin);
    for ( i = 0; i < ult+1; i++)
    {
      if (strcmp(agenda[i].nome, nome) == 0 ){
        setbuf(stdin,NULL);
        printf("\nContato encontrado!\n:>");
        printf("Deseja realmente remover? -- (sim / não)\n:>");
        fgets(escolha, 10, stdin);
        if (strcasestr(escolha, "sim")){
          for (j = i; j < cont; j++)
          {
            strcpy(agenda[j].nome, agenda[j+1].nome);
            strcpy(agenda[j].email, agenda[j+1].email);
            strcpy(agenda[j].tel, agenda[j+1].tel);
            strcpy(agenda[j].loc, agenda[j+1].loc);
            strcpy(agenda[j].obs, agenda[j+1].obs);
            agenda[j].data.dia = agenda[j+1].data.dia;
            agenda[j].data.mes = agenda[j+1].data.mes;
            agenda[j].data.ano = agenda[j+1].data.ano;
            agenda[j].posic = agenda[j+1].posic;
          }
        }
      }

    }
    ult--;
    return 0;
}

void list(){
    int i, escolha;
    printf("\n\n*** Agenda ***\n\n");
    printf("1 - Exibir todos os dados / 2 - Exibir apenas nome, telefone e e-mail\n:>");
    scanf("%d",&escolha);
    for (i = 0; i < ult; i++)
    {
        exibircontato(i, escolha);
    }
    return 0;
}

void main(){
    setlocale(LC_ALL,"portuguese");
    int a=1, escolha;
    printf("\n*** Agenda [Aberta] ***\n");
    while (a==1){
        setbuf(stdin,NULL);
        printf("\n<MENU>\n");
        printf("1 - Cadastrar\n");
        printf("2 - Pesquisar por nome\n");
        printf("3 - Pesquisar por mês de aniversário\n");
        printf("4 - Pesquisar por dia e mês de aniversário\n");
        printf("5 - Listar agenda em ordem alfabética\n");
        printf("6 - Excluir contato da agenda\n");
        printf("7 - Lista contatos\n");
        printf("8 - Encerrar\n:>");
        scanf("%d", &escolha);
        if ( escolha < 1 || escolha > 8) {
          printf("Opção inválida");
        } else{
          switch (escolha)
          {
          case 1:
              cad();
            break;
          case 2:
              p_nome();
            break;
          case 3:
              p_mes();
            break;
          case 4:
              p_dia_mes();
            break;
          case 5:
              list_ordem_alf();
            break;
          case 6:
              excluircontato();
            break;
          case 7:
              list();
            break;
          case 8:
              a=2;
            break;

          default:
            break;
          }
        }
    }
    printf("\n\n*** Agenda Fechada ***\n\n");

  return 0;
}

