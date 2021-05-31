#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();

int main()
{
    setlocale(LC_ALL,"portuguese");
    int escolha = 0;
    do{
        printf("Digite um número entre 1 e 3 para escolher uma questão da prova:\n");
        printf("[1] Questão 01\n[2] Questão 02\n[3] Questão 03\n");
        scanf("%d", &escolha);
        switch (escolha){
            case 1:
                printf("Exercício 01\n");
                ex01();
                escolha = check();
                break;
            case 2:
                printf("Exercício 02\n");
                ex02();
                escolha = check();
                break;
            case 3:
                printf("Exercício 03\n");
                ex03();
                escolha = check();
                break;
            default:
                printf("Exercício inválido,por favor escolha um número entre 1 e 3\n");
                escolha = 0;
                break;
        }

    } while (escolha < 1 || escolha > 3);
    return 0;
}

int ex01()
{
    char symbol;
    printf("Digite um símbolo do teclado para verificiar se ele é uma letra maíuscula,minúscula, um algorismo ou algum outro símbolo:");
    scanf(" %c", &symbol);
    if (symbol >= '0' && symbol <= '9')
    {
        printf("O símbolo %c é um ALGARISMO\n", symbol);
    }
    else if (symbol >= 'a' && symbol <= 'z')
    {
        printf("O símbolo %c é uma LETRA MINÚSCULA\n", symbol);
    }
    else if (symbol >= 'A' && symbol <= 'Z')
    {
        printf("O símbolo %c é uma LETRA MAIÚSCULA\n", symbol);
    }
    else
        printf("O símbolo %c é um OUTRO SÍMBOLO\n", symbol);
    return 0;
}

int ex02()
{
    char cadeia[10];
    int rule = 0;
    printf("Digite uma cadeia de caracteres para ver se ele passa a regra.\n");
    printf("- tamanho mínimo de 3 e máximo 10 caracteres\n- deve começar com letra maiúscula\n- deve conter pelo menos uma letra minúscula\n- o terceiro caractere da cadeia deve ser um número.\n");
    scanf("%s", &cadeia);
    if (strlen(cadeia) >= 3 && strlen(cadeia) <= 10)
    {
        if (cadeia[0] >= 'A' && cadeia[0] <= 'Z')
        {
            if (cadeia[2] >= '0' && cadeia[2] <= '9')
            {
                for (int i = 0; i < strlen(cadeia); i++)
                {
                    if (cadeia[i] >= 'a' && cadeia[i] <= 'z')
                    {
                        rule = 1;
                        break;
                    }
                }
            }
            else
                printf("O terceiro caractere da cadeia deve ser um número.\n");
        }
        else
            printf("A cadeia de caracteres deve começar com letra maiúscula!\n");
    }
    else
        printf("A cadeia de caracteres deve possuir tamanho mínimo de 3 e máximo 10 caracteres!\n");

    if (rule == 1)
        printf("A cadeia de caracteres passa a regra!\n");
    else
        printf("A cadeia de caracteres NÃO passa a regra!\n");

    return 0;
}

int ex03()


{

    int numInicial = 0, numFinal = 0, fatorial = 1, i, aux;
    while ((numInicial < 1 || numInicial > 10) || (numFinal < 1 || numFinal > 10))
    {
        printf("Por favor, insira um número entre 1 e 10.\n");
        printf("Digite um número inicial:");
        scanf("%d", &numInicial);
        printf("Digite um número final:");
        scanf("%d", &numFinal);
        aux = numInicial;
    }
    while (numInicial <= numFinal)
    {
        fatorial = 1;
        for (i = 0; i < numInicial; i++)
        {
            fatorial = fatorial * (numInicial - i);
        }
        printf("Fatorial de %d => %d\n", numInicial, fatorial);
        numInicial++;
    }
    numInicial = aux;
    while (numFinal <= numInicial)
    {
        fatorial = 1;
        for (i = 0; i < numFinal; i++)
        {
            fatorial = fatorial * (numFinal - i);
        }
        printf("Fatorial de %d => %d\n", numFinal, fatorial);
        numFinal++;
    }
    return 0;
}

int check(){
    int choice;
    printf("----------------------\n");
    printf("Você deseja ver outro exercício?\n");
    printf("[1] Sim\n[2] Não\n");
    scanf("%d",&choice);
    if(choice == 1)
        choice = 0;
    else
        choice = 1;
    #ifdef WIN32
        system("cls");
    #else
        system("clear");
    #endif
    return choice;
}
