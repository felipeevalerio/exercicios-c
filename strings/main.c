#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main(){
    int ex=1;
    while(ex > 0){
        printf("Digite o número do exercício para poder ver o exercício.\n");
        printf("[1] Exercício 01\n[2] Exercício 02\n[3] Exercício 03\n[4] Exercício 04\n[5] Exercício 05\n[6] Exercício 06\n[7] Exercício 07\n[8] Exercício 08\n[9] Exercício 09\n[10] Exercício 10\n");
        scanf("%d",&ex);
        switch(ex){
            case 1:
                printf("Exercício 01\n");
                ex01();
                ex = check();
                break;
            case 2:
                printf("Exercício 02\n");
                ex02();
                ex = check();
                break;
            case 3:
                printf("Exercício 03\n");
                ex03();
                ex = check();
                break;
            case 4:
                printf("Exercício 04\n");
                ex04();
                ex = check();
                break;
            case 5:
                printf("Exercício 05\n");
                ex05();
                ex = check();
                break;
            case 6:
                printf("Exercício 06\n");
                ex06();
                ex = check();
                break;
            case 7:
                printf("Exercício 07\n");
                ex07();
                ex = check();
                break;
            case 8:
                printf("Exercício 08\n");
                ex08();
                ex = check();
                break;
            case 9:
                printf("Exercício 09\n");
                ex09();
                ex = check();
                break;
            case 10:
                printf("Exercício 10\n");
                ex10();
                ex = check();
                break;
            default:
                printf("Exercício inválido,por favor escolha um número entre 1 a 10\n");
                ex = 1;
                break;
        }
    }
    return 0;
}

int ex01(){
    char palavra[30];
    char lexico[30]="A";
    char tamanho[30]="b";
    int continuar,contagem1,contagem2;
    continuar=2;
    while(continuar!=1){
        printf("Digite uma palavra: ");
        fflush(stdin);
        scanf("%s",palavra);
        contagem1=strlen(palavra);
        contagem2=strlen(tamanho);
        if(contagem1>contagem2){
            strcpy(tamanho,palavra);
         }
        printf("A maior palavra em tamanho e %s\n",tamanho);
        if(palavra[0]>lexico[0]){
            strcpy(lexico,palavra);
        }
        printf("A maior palavra lexicografamente e %s\n",lexico);
        printf("--------------------------------------------------------------------\n");
        printf("Deseja continuar? Se sim, digite qualquer numero diferente de 1: ");
        fflush(stdin);
        scanf("%i",&continuar);
    }
    printf("Fim do exercicio 1. Pressione enter para continuar...\n");
    return 0;
}
int ex02(){
    char palavra[50];
    int as=0;
    printf("Digite uma palavra pra ver quantas letras A essa palavra possui:");
    scanf("%s",&palavra);
    for(int i=0; i < strlen(palavra); i++){
        if(palavra[i] == 'a' || palavra[i] == 'A'){
            as++;
        }
    }
    printf("A palavra %s possui %d letras A\n",palavra,as);
    return 0;
}
int ex03(){
    char palavra[50];
    int as=0;
    printf("Digite uma palavra pra ver quantas letras A essa palavra possui:");
    scanf("%s",&palavra);
    for(int i=0; i < strlen(palavra); i++){
        if(palavra[i] == 'a' || palavra[i] == 'A')
            printf("Existe uma letra a na posição %d\n",i);   
    }
    return 0;

}
int ex04(){
    char palavra[50],letra;
    int repete=0;
    printf("Digite uma palavra:");
    scanf("%s",&palavra);
    printf("Digite um caractere para ver quantas vezes ele repete na palavra:");
    scanf(" %c",&letra);   
    for(int i =0; i < strlen(palavra); i++){
        if(palavra[i] == letra){
            printf("O caractere %c está na posição %d\n",letra,i);
            repete++;
        }
    }
    printf("O caractere %c repete %d %s.\n",letra,repete,repete != 1 ? "vezes" : "vez");
    
    return 0;
}
int ex05(){
    char palavra[50],letra;
    int repete=0;
    printf("Digite uma palavra:");
    scanf("%s",&palavra);
    printf("Digite um caractere para ver quantas vezes ele repete na palavra:");
    scanf(" %c",&letra);
    if(letra < 'A' && letra > 'z'){
        printf("Caractere inválido. Por favor escreva um caractere de 'A' a 'z'\n");
        return 0;
    }
    for(int i =0; i < strlen(palavra); i++){
        if(palavra[i] == letra){
            printf("O caractere %c está na posição %d\n",letra,i);
            repete++;
        }
    }
    printf("O caractere %c repete %d %s.\n",letra,repete,repete != 1 ? "vezes" : "vez");
    return 0;
}
int ex06(){
    // 
    char palavra[50],letra;
    int numeros=0,nenhum=0,letras=0;
    printf("Digite uma palavra:");
    scanf("%s",&palavra);
    for(int i =0; i < strlen(palavra); i++){

        if(palavra[i] >= '0' && palavra[i] <= '9')
            numeros++;
        
        else if((palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= 'a' && palavra[i] <= 'z'))
            letras++;
        
        else
            nenhum++;
        
    }

    printf("Nenhum => %d vezes\nNúmeros => %d vezes\nLetras => %d vezes\n",nenhum,numeros,letras);
    return 0;
}
int ex07(){
    char palavra[50];
    printf("Digite uma palavra:");
    scanf("%s",&palavra);
    int total = strlen(palavra);
    for(int i = 0; i < total / 2; i++) {
       char aux = palavra[i]; //armazena o character inicial
       palavra[i] = palavra[total - i - 1]; //Troca o character da ponta oposta
       palavra[total - i - 1] = aux; //Armazena o character inicial no palavra
    }
    printf("%s", palavra);

}
int ex08(){
    int i;
    char palavra[50], palavranova[50];
    printf("Digite uma palavra de ate 50 caracteres.\n");
    gets(palavra);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        while (isspace(palavra[i]))
        {
            for (int y = i; palavra[y] != '\0'; y++)
            {
                palavra[y] = palavra[y + 1];
            }
        }
    }
    strcpy(palavranova, palavra);
    printf("\nPalavra sem espacos em branco: %s", palavranova);

    return 0;
}

int ex09(){
    int i;
    char palavra[50];
    printf("Digite uma palavra de ate 50 caracteres.\n");
    gets(palavra);
    for (i = 0; palavra[i] != '\0'; i++)
    {
        while (isspace(palavra[i]))
        {
            for (int y = i; palavra[y] != '\0'; y++)
            {
                palavra[y] = palavra[y + 1];
            }
        }
    }
    printf("\nPalavra sem espacos em branco: %s", palavra);
    return 0;
}
int ex10(){
    printf("\nExercicio 10\n");
    printf("--------------------------------------------------------------------------------------------------\n");

    int const quantodadeElementos = 50;
    char vetorPalavra[quantodadeElementos];

    printf("Informe uma palavra: ");
    scanf("%s", vetorPalavra);

    verificarRepeticao(vetorPalavra, quantodadeElementos);

    return 0;
}

void verificarRepeticao(char vetorPalavra[], int quantidadeElementos)
{

    int contador = 0, i = 0, j = 0, teste = 0;
    char charVerificaAtual, vetorPalavraDois[quantidadeElementos];

    for (i = 0; i < quantidadeElementos; i++)
    {
        vetorPalavraDois[i] = '\0';
    }

    for (i = 0; vetorPalavra[i] != '\0'; i++)
    {
        charVerificaAtual = vetorPalavra[i];
        verificarExistencia(vetorPalavraDois, charVerificaAtual, &teste);
        if (teste == 1)
        {
        }
        else if (teste == 0)
        {
            for (j = 0; vetorPalavra[j] != '\0'; j++)
            {
                if (charVerificaAtual == vetorPalavra[j])
                {
                    contador++;
                }
            }
            vetorPalavraDois[i] = charVerificaAtual;
            printf("%c Ocorreu %d.\n", charVerificaAtual, contador);
            contador = 0;
            teste = 0;
        }
    }
}

void verificarExistencia(char vetorPalavraDois[], char charVerificaAtual, int *teste)
{

    int i = 0, testedois = 0;

    for (i = 0; vetorPalavraDois[i] != '\0'; i++)
    {
        if (charVerificaAtual == vetorPalavraDois[i])
        {
            testedois = 1;
            break;
        }
    }
    *teste = testedois;
}



int check(){
    int choice;
    printf("----------------------\n");
    printf("Você deseja ver outro exercício?\n");
    printf("[1] Sim\n[2] Não\n");
    scanf("%d",&choice);
    if(choice == 1)
        choice = 1;
    else
        choice = 0;
    #ifdef WIN32
        system("cls");
    #else
        system("clear");
    #endif
    return choice;
}