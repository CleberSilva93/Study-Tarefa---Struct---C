#include <stdio.h>
#include <locale.h>

struct dma {
      int dia;
      int mes;
      int ano;
    };

void main(){
    setlocale(LC_ALL,"portuguese");

    struct dma ini, end;
    int dif;

    printf("*** Compare as Datas ***\n");
    while (1) {
        fflush(stdin);
        printf("\nDigite a data inicial - (Ex: 10/05/20)\n");
        printf("Dia\n:>");
        scanf("%d", &ini.dia);
        printf("Mês\n:>");
        fflush(stdin);
        scanf("%d", &ini.mes);
        fflush(stdin);
        printf("Ano\n:>");
        scanf("%d", &ini.ano);
        if (!(((ini.dia <= 0) || (ini.dia > 31)) || ((ini.mes <= 0) || (ini.mes > 12)) || (ini.ano < 0))) {
            break;
        } else {
          printf("Data inválida!\n");
        }
    }

    while (1) {
        fflush(stdin);
        printf("\nDigite a data final - (Ex: 10/05/20)\n");
        printf("Dia\n:>");
        scanf("%d", &end.dia);
        printf("Mês\n:>");
        fflush(stdin);
        scanf("%d", &end.mes);
        fflush(stdin);
        printf("Ano\n:>");
        scanf("%d", &end.ano);
        if ((end.mes < ini.mes) & (end.ano < ini.ano)){
            printf('A data final não pode ser menor que a data inicial!\n');
        } else {
            if (!(((end.dia <= 0) || (end.dia > 31)) || ((end.mes <= 0) || (end.mes > 12)) || (end.ano < 0))) {
              break;
            } else {
              printf("Data inválida!\n");
            }
        }
    }

    printf("\nComparando a diferença de dias entre as datas\nAguarde...\n");

    dif = end.dia - ini.dia;
    dif += (end.mes - ini.mes)*31;
    dif += (end.ano - ini.ano)*365;

    printf("\nA diferença entre as duas datas é de:\n :>%d dias\n", dif);

  return 0;
}
