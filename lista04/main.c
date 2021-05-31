#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>

void ex01();
void ex02();
void ex03();
void ex04();
void ex05();
void ex06();
void ex07();
void ex08();
void ex09();
void ex10();

int main(void){
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


void ex01(){
    char word[50];
    printf("Digite uma palavra para ver quantas letras maiúsculas existem:");
    scanf("%s",&word);
    for(int i = 0;i < strlen(word);i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            printf("%c\n",word[i]);
        }
    }
}

void ex02(){
    char word[50],c,upperWord,menor=0,maior=0,iguais=0;
    printf("Digite uma palavra:");
    scanf("%s",&word);
    printf("Digite um caractere:");
    scanf(" %c",&c);

    for(int i =0; i < strlen(word);i++){
        if(toupper(word[i]) > c){
            printf("%c é maior do que %c\n",toupper(word[i]),c);
            maior++;
        }
        else if(toupper(word[i]) < c){
            printf("%c é menor do que %c\n",toupper(word[i]),c);
            menor++;
        }
        else{
            printf("%c é igual a %c\n",toupper(word[i]),c);
            iguais++;
        }
    }
    printf("Maiores => %d\nMenores => %d\nIguais => %d\n",maior,menor,iguais);
}

void ex03(){
    char word[50];
    int maiusculas=0,minusculas=0,letras=0;
    printf("Digite uma cadeia de caracteres.\n");
    scanf("%s",&word);
    for(int i = 0; i< strlen(word); i++){
        if((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z')){
            printf("O caractere %c é uma letra\n",word[i]);
            if(word[i] >= 'A' && word[i] <= 'Z'){
                printf("O caractere %c é uma letra maiúscula.\n",word[i]);
                maiusculas++;
            }
            else if(word[i] >= 'a' && word[i] <= 'z'){
                printf("O caractere %c é uma letra minúscula.\n",word[i]);
                minusculas++;
            }
            letras++;
        }
    }
    printf("Letras=>%d\nMaiúsculas=>%d\nMinúsculas=>%d",letras,maiusculas,minusculas);
}


void ex04(){
    char cadeia[50];
    int len = 0;
    printf("\nDigite uma cadeia de caracteres: ");
    scanf("%s", cadeia);
    len = strlen(cadeia);
    printf("Cadeia do início ao fim = [ ");
    for( int i = len ; i >= 0 ; i--){
        printf("%c, ", cadeia[i]);
    }
    printf("]\nTotal de caracteres = [ %d ]", len);

}
void ex05(){
    char cadeia[50], selecionados[50];
    int len = 0;

    printf("\nDigite uma cadeia de caracteres: ");
    scanf("%s", cadeia);

    len = strlen(cadeia);

    for(int i = 0 ; i < len ; i++){
        if( ( cadeia[i] < 'a' || cadeia[i] > 'z') && ( cadeia[i] < '0' || cadeia[i] > '9' ) ){
            selecionados[i] = cadeia[i];
        }
    }
    printf("Não digitos e não minusculos: [");
    for(int j = 0 ; j < strlen(selecionados) ; j++){
        printf("%c, ", selecionados[j]);
    }
    printf("]\nTotal de Caracteres: %ld", strlen(selecionados));
}
void ex06(){
    int numeros[100], numControle = 0, fimDaLista = 0;

    for(int i = 0; i < 100 ; i++){
        printf("Digite um numero: ");
        scanf("%d", &numControle);
        if (numControle != -1){
            numeros[i] = numControle;
        }else{
            i++;
            fimDaLista = i;
            i = 100;
        }
    }

    for(int p = 0 ; p < 50 ; p++){
        printf("%d, ", numeros[p]);
    }
}
void ex07(){

}
void ex08(){

}
void ex09(){
  
}
void ex10(){
    char global[50], outraCadeia[50];
    int len = strlen(global);
    printf("Digite uma cadeia de caracteres: ");
    scanf("%s", global);
    for(int i = 0, p = 0 ; i < len ; i++){
        if( (global[i] < 'a' && global[i] > 'z') && (global[i] < '0' && global[i] > '9') &&(global[i] < 'A' && global[i] > 'Z') ){
            outraCadeia[p] = global[i];
            p++;
        }
    }

    printf("Caracteres que não são letras nem dígitos : [");
    for(int j = 0 ; j < len ; j++){
        printf("%c, ", outraCadeia[j]);
    }
    printf("]");
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