#include <stdio.h>
#include <locale.h>

struct {
    char compromisso[60];
    struct {
        int dia;
        int mes;
        int ano;
    } data;
} appointment[5];

void main(){
    setlocale(LC_ALL,"portuguese");
    int i, retorno, mes, ano;

    printf("\n*** Agende os compromisso ***\n");

    printf("- Incluir compromissos [5] -\n");
    for ( i = 0; i < 5; i++)
    {
      setbuf(stdin,NULL);
      printf("\n/*/ %d - Compromisso /*/ \n",i+1);
      printf("- Anotação sobre o compromisso -\n:>");
      fgets(appointment[i].compromisso, 59, stdin);
      setbuf(stdin,NULL);
      printf("- Data do compromisso -\n");
      printf("- Dia -\n:>");
      scanf("%d", &appointment[i].data.dia);
      setbuf(stdin,NULL);
      printf("- Mês -\n:>");
      scanf("%d", &appointment[i].data.mes);
      setbuf(stdin,NULL);
      printf("- Ano -\n:>");
      scanf("%d", &appointment[i].data.ano);
    }

    printf("\n*** Liste os compromissos ***\n");
    while (1){
        printf("\n - Digite o mês e o Ano do compromisso - (0 para encerrar)\n");
        printf("- Mês -\n:>");
        scanf("%d", &mes);
        printf("- Ano -\n:>");
        scanf("%d", &ano);
        retorno=0;
        if (mes == 0){
            break;
        } else {
          for ( i = 0; i < 5; i++)
            {
              if ((appointment[i].data.mes == mes) & (appointment[i].data.ano == ano)){

                  printf("\nCompromisso!\n");
                  printf("Anotação %s", appointment[i].compromisso);
                  printf("\nData %d/%d/%d\n", appointment[i].data.dia,appointment[i].data.mes, appointment[i].data.ano);
                  retorno++;
              } else {
                if((retorno==0) & (i==4)){
                  printf("\nNão há compromisso para este mês e ano\n");
                }
              }
            }
        }
    }

    printf("\n*** Encerrando... ***\n");
  return 0;
}
