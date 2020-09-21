#include <stdio.h>
#include <locale.h>
#define n 5

struct divices
{
    char nome[15];
    float energia;
    float uso;
    float consumo;
} dv[n];

int main()
{
    setlocale(LC_ALL,"portuguese");
    int dias, i;
    for (i = 0; i < n; i++)
    {
        printf("\nInsera: Potência do dispositivo(kw) Uso(h):");
        scanf("%s %f %f", &dv[i].nome, &dv[i].energia, &dv[i].uso);
    }

    printf("\ndias:");
    scanf("%d", &dias);
    for (i = 0; i < n; i++)
    {
        dv[i].consumo = dv[i].energia * dv[i].uso * dias;
    }

    for (i = 0; i < n; i++)
    {
        printf("\n\n%s %0.2fkw \nUso:%0.2fh\nConsumo:%0.2fkw", dv[i].nome, dv[i].energia, dv[i].uso, dv[i].consumo);
    }

    printf("\n\n");

    return 0;
}
