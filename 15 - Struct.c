#include <stdio.h>
#include <locale.h>
#include <string.h>

struct{
  char titulo[30];
  char autor[15];
  int ano;
}livros[5];

int main(){
    setlocale(LC_ALL,"portuguese");
    int i;
    char comp[30];
    char exit[]="sair";

  printf("** Biblioteca **\n");

  printf("Cadastre os livros\n");
  for ( i = 0; i < 2; i++)
  {
    setbuf (stdin,NULL);
    printf("%d - Livro\n",i+1);
    printf("Título\n:>");
    fgets(livros[i].titulo, 29, stdin);
    setbuf (stdin,NULL);
    printf("Autor\n:>");
    fgets(livros[i].autor, 14, stdin);
    setbuf (stdin,NULL);
    printf("Ano\n:>");
    scanf("%d",&livros[i].ano);
  }

  while (!strcasestr(comp, "Sair")){
    setbuf (stdin,NULL);
    printf("\nDigite o título que deseja encontrar -- Digite 'Sair' para finalizar --\n:>");
    fgets(comp, 30, stdin);

    for ( i = 0; i < 5; i++)
    {
      if (strcmp(livros[i].titulo, comp) == 0){
        printf("Título: %s", livros[i].titulo);
        printf("Autor: %s", livros[i].autor);
        printf("Ano: %d\n", livros[i].ano);
        printf("-----\n");
      }
    }


  }
  printf("\n\n----------- Encerrando... -----------");
  return 0;
}
