#include <stdio.h>
#include <locale.h>

struct Horario{
  int hora;
  int minutos;
  int segundos;
};

struct Data{
  int dia;
  int mes;
  int ano;
};

struct {
    struct Data data;
    struct Horario hora;
    char text[100];
}Compromisso;

void main()
{
    setlocale(LC_ALL,"portuguese");
    printf("\n\n**** Registre um compromisso ****\n\n");

    printf("-- Anotação sobre o Compromisso --\n:>");
    fgets(Compromisso.text, 99, stdin);
    setbuf(stdin,NULL);
    printf("-- Data do compromisso--\n");
    printf("-- Dia --\n:>");
    scanf("%d", &Compromisso.data.dia);
    setbuf(stdin,NULL);
    printf("-- Mês --\n:>");
    scanf("%d", &Compromisso.data.mes);
    setbuf(stdin,NULL);
    printf("-- Ano --\n:>");
    scanf("%d", &Compromisso.data.ano);

    printf("\n\n-*- O compromisso foi criado para o dia %d/%d/%d\n", Compromisso.data.dia, Compromisso.data.mes, Compromisso.data.ano);
    printf("-*- Anotação: %s_*_", Compromisso.text);

    return 0;

}
