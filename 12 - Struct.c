#include <stdio.h>
#include <locale.h>
#include <unistd.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

struct{
    char nome[40];
    char grito[40];
    int pontos;
    struct{
      char ccarta;
      int valor;
      char nipe[20];
    }cartas[5];
} jogador[2];

struct{
    char nome[40];
}ganhador[100];


int randomico(){
    int valor;
    valor = (rand() % 39);
    return valor;
}

void exibircartas(int qtd, int i){
        int k;
           for ( k = 0; k < qtd; k++)
          {
            printf("|%c      |", jogador[i].cartas[k].ccarta);
          }
          printf("\n");
          for ( k = 0; k < qtd; k++)
          {
            printf("|%s|", jogador[i].cartas[k].nipe);
          }
          printf("\n");
          for ( k = 0; k < qtd; k++)
          {
            printf("|       |");
          }

          printf("\n\n");
          return 0;
}
void main(){
    srand(time(0));
    setlocale(LC_ALL,"portuguese");
    int i,h,j,k, ordem[100],a;
    int card, repetida, qtd, escolha, morecard, jogadores, aux;
    char ccartas[40]={'A','A','A','A','2','2','2','2','3','3','3','3','4','4','4','4','5','5','5','5','6','6','6','6','7','7','7','7','Q','Q','Q','Q','J','J','J','J','K','K','K','K'};
    int valor[40]={1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10};
    char nipe[40][40]={"Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   ","Ouros  ","Espadas","Copas  ","Paus   "};


    printf("\n*** Seja bem-vindo Ao Pira-21 ***\n");
    printf("Carregando...\n");
    printf("\n*** Escolha seu parceiro e vamos jogar ***\n");
    printf("\n*** Alcance 21 pontos mas não o ultrapasse ***\n");
    printf("*** Cadastre os jogadores antes de iniciar!\n");
    printf("*** Quantos jogadores serão? ***\n:>");
    scanf("%d",&jogadores);
    if(jogadores>1){
      for (i = 0; i < jogadores; i++)
        {
            fflush(stdin);
            setbuf(stdin,NULL);
            printf("*** %d - jogador ***\n",i+1);
            printf("- Nome: -\n:>");
            fgets(jogador[i].nome, 39, stdin);
            setbuf(stdin,NULL);
            printf("*** Grito de vitória ***\n:>");
            fgets(jogador[i].grito, 39, stdin);
            setbuf(stdin,NULL);
        }
        printf("*** Jogadores Cadastrados ***\n");
        printf("Vamos jogar?\n");
        printf("\n*** Pressione enter para iniciar ***\n");
        getchar();
        setbuf(stdin,NULL);
        printf("\n*** Distribuindo as cartas... ***\n");
        usleep(1000);
        printf("*** Primeiro Jogador ***\n");

        for ( i = 0; i < jogadores; i++)
        {
          qtd=3;
          morecard=0;
          a=1;
          printf("\n***|----------------------|***\n");
          printf("\n*** %d - Jogador ***\n",i+1);
          printf("*** Olá %s", jogador[i].nome);
          printf("*** Essas são as suas 3 cartas ***\n");
          setbuf(stdin,NULL);
          for (j = 0; j < 3; j++)
          {
              card = randomico();
              jogador[i].cartas[j].ccarta = ccartas[card];
              strcpy(jogador[i].cartas[j].nipe, nipe[card]);
              jogador[i].pontos+=valor[card];

            }
              while (a==1)
              {
                  printf("\n\n Suas Cartas!\n");
                  exibircartas(qtd, i);
                  printf("\n Sua Pontuação È :%d\n",jogador[i].pontos);
                  if(jogador[i].pontos <= 21){
                      printf("*** Mais 1 carta ou Quer parar? (1 - Continuar / 2 - Parar)***\n");
                      scanf("%d", &escolha);
                      fflush(stdin);
                      if(escolha == 1){
                        card = randomico();
                        jogador[i].cartas[j+morecard].ccarta = ccartas[card];
                        strcpy(jogador[i].cartas[j+morecard].nipe, nipe[card]);
                        jogador[i].pontos+=valor[card];
                        morecard++;
                        qtd++;
                      }
                      if(escolha==2){
                          a=2;
                      }
                  } else if (jogador[i].pontos > 21){
                    printf("\n\n");
                    exibircartas(qtd, i);
                    printf("\n*** Você fez %d pontos, e está fora do jogo! ***\n",jogador[i].pontos);
                    jogador[i].pontos = 0;
                    a=2;
                  }
              }
        }
        // ordem dos jogadores
          for (i = 0; i < jogadores; i++)
            {
              ordem[i] = i;
            }
          for ( i = 0; i < jogadores; i++)
          {
                for (j = i; j < jogadores-1; j++)
                {
                    if(jogador[ordem[j]].pontos > jogador[ordem[j+1]].pontos){
                      aux = ordem[j];
                      ordem[j]= ordem[j+1];
                      ordem[j+1]= aux;
                    }
                }
          }

          for (i = 0; i < jogadores; i++)
          {
            printf("\n%d ordem", ordem[i]);
            printf("\n%s", jogador[ordem[i]].nome);
          }


          if(jogador[ordem[jogadores-1]].pontos == jogador[ordem[jogadores-2]].pontos){
            printf("\n\n*** Há um empate entre:\n %s e o\n %s",jogador[ordem[jogadores-1]].nome, jogador[ordem[jogadores-2]].nome );
            printf("*** Portanto, não há ganhadores ***\n");
          } else {
            printf("\n\n*** O Jogador Vencedor ÉÉÉÉÉÉÉ OOoooOOO ***\n");
            printf("%s", jogador[ordem[jogadores-1]].nome);
            printf("*** Solte seu grito da vitória!!! ****\n");
            printf("%s", jogador[ordem[jogadores-1]].grito);
          }
    }else {
      printf("\n*** Digite um valor maior do que 1***\n");
    }

    printf("\n\n*** Encerrando o game... ***\n\n");

  return 0;
}
