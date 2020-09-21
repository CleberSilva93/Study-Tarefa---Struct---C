#include <stdio.h>
#include <locale.h>
#include <windows.h>

void main(){
    setlocale(LC_ALL,"portuguese");

    printf("*** Seja bem-vindo Ao Pira-Poker ***");
    printf("Carregando...");
    Sleep(1000);
    printf("*** Escolha seu parceiro e vamos jogar ***");
    printf("Está pronto?\n");
    printf("Pressione qualquer botão para começar");
    getch();



  return 0;
}
