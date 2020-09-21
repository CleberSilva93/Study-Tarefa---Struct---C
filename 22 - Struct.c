#include <stdio.h>
#define n 5

struct info
{
    char nome[21];
    float salario;
    int rg;
    char cpf[15];
    char civil;
    char telefone[20];
    int idade;
    char sexo;
    struct endereco
    {
        char rua[31];
        char bairro[31];
        char cidade[31];
        char estado[31];
        char cep[14];
    };
} inf[n];

int main()
{
    int i, rgs = 1;
    setlocale(LC_ALL,"portuguese");
    for (i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nnome:");
        fgets(inf[i].nome, 21, stdin);
        fflush(stdin);
        printf("\nsalario:");
        scanf("%f", &inf[i].salario);
        fflush(stdin);
        printf("\nRG:");
        scanf("%d", &inf[i].rg);
        fflush(stdin);
        printf("\nCPF:");
        fgets(inf[i].cpf, 15, stdin);
        fflush(stdin);
        printf("\nEstadoCivil(s, m, d):");
        scanf("%c", &inf[i].civil);
        fflush(stdin);
        printf("\ntelefone:");
        fgets(inf[i].telefone, 20, stdin);
        fflush(stdin);
        printf("\nidade:");
        scanf("%d", &inf[i].idade);
        fflush(stdin);
        printf("\nsexo (m or f):");
        scanf("%c", &inf[i].sexo);
        fflush(stdin);
        printf("\nrua:");
        fgets(inf[i].rua, 31, stdin);
        fflush(stdin);
        printf("\nbairro:");
        fgets(inf[i].bairro, 31, stdin);
        fflush(stdin);
        printf("\ncidade:");
        fgets(inf[i].cidade, 31, stdin);
        fflush(stdin);
        printf("\nestado:");
        fgets(inf[i].estado, 31, stdin);
        fflush(stdin);
        printf("\nCEP:");
        fgets(inf[i].cep, 31, stdin);
    }

    for (i = 0; i < n; i++)
    {

        if (inf[i].sexo == 'm')
        {
            printf("\n\n--Sexo Detectado--");

            printf("\nnome:%ssalario:%0.2f\nRG:%d\nCPf:%EEstadoCivil:%c", inf[i].nome, inf[i].salario, inf[i].rg, inf[i].cpf, inf[i].civil);
            printf("\ntelefone:%sidade:%d\nsexo:%c", inf[i].telefone, inf[i].idade, inf[i].sexo);
            printf("\nrua:%sbairro:%scidade:%sestado:%sCEP:%s", inf[i].rua, inf[i].bairro, inf[i].cidade, inf[i].estado, inf[i].cep);
        }

        if (inf[i].salario > 1000)
        {
            printf("\n\n--Salário acima de 1000-");

            printf("\nnome:%ssalario:%0.2f\nRG:%d\nCPf:%EEstadoCivil:%c", inf[i].nome, inf[i].salario, inf[i].rg, inf[i].cpf, inf[i].civil);
            printf("\ntelefone:%sidade:%d\nsexo:%c", inf[i].telefone, inf[i].idade, inf[i].sexo);
            printf("\nrua:%sbairro:%scidade:%sestado:%sCEP:%s", inf[i].rua, inf[i].bairro, inf[i].cidade, inf[i].estado, inf[i].cep);
        }
    }

    do
    {
        fflush(stdin);
        printf("\n Pesquisar pelo RG:");
        scanf("%d", &rgs);

        for (i = 0; i <= n; i++)
        {
            if (rgs == inf[i].rg && rgs != 0)
            {

              printf("\n\n--Usuário Encontrado--\n");
              printf("\nnome:%ssalario:%0.2f\nRG:%d\nCPf:%EEstadoCivil:%c", inf[i].nome, inf[i].salario, inf[i].rg, inf[i].cpf, inf[i].civil);
              printf("\ntelefone:%sidade:%d\nsexo:%c", inf[i].telefone, inf[i].idade, inf[i].sexo);
              printf("\nrua:%sbairro:%scidade:%sestado:%sCEP:%s", inf[i].rua, inf[i].bairro, inf[i].cidade, inf[i].estado, inf[i].cep);
            }
        }

    } while (rgs != 0);

    printf("\n\n");

    return 0;
}
