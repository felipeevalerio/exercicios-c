#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void ex01();
void ex02();
void ex03();
void ex04();
void ex05();
void ex06();

int randomNumber(int,int);
int somaDiagonalPrincipal(int matriz[10][10],int tam);
void printMatriz(int matriz[10][10],int tam);
void encontrarNumero(int matriz[10][10], int tam);


int main(){
    setlocale(LC_ALL, "portuguese");
    int ex=1;
    while(ex > 0){
        printf("Digite o número do exercício para poder ver o exercício.\n");
        printf("[1] Exercício 01\n[2] Exercício 02\n[3] Exercício 03\n[4] Exercício 04\n[5] Exercício 05\n[6] Exercício 06\n");
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
            default:
                printf("Exercício inválido,por favor escolha um número entre 1 a 10\n");
                ex = 1;
                break;
        }
    }
}


int randomNumber(int inicial,int final){
    int random;
    random = inicial + (rand() % final);
    return random;
}

void ex01(){
    int matriz[10][10];
    for(int i=0; i< 10; i++){
        for(int j=0; j< 10 ; j++){
            matriz[i][j] = randomNumber(15,35);
        }
        
    }

    for(int i=0; i< 10; i++){
        for(int j=0; j < 10 ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
        
    }


}


void ex02(){
    int tamanho = 10;
    int matriz[tamanho][tamanho];
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            matriz[i][j] = randomNumber(15,35);
        }
    }
    printMatriz(matriz,tamanho);
}

void printMatriz(int matriz[10][10],int tam){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void ex03(){
    int tamanho = 10;
    int matriz[tamanho][tamanho];
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
            matriz[i][j] = randomNumber(15,35);
        }
    }

    printMatriz(matriz,tamanho);

    int res = somaDiagonalPrincipal(matriz,tamanho);
    printf("A soma dos valores da diagonal principal é %d\n",res);
}

int somaDiagonalPrincipal(int matriz[10][10],int tam){
    int soma=0;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){
            if(i == j)  
                soma += matriz[i][j];
        }   
    }

    return soma;
}


void ex04(){
    int tamanho = 10;
    int matriz[tamanho][tamanho];
    for(int i=0; i< tamanho; i++){
        for(int j=0; j< tamanho ; j++){
            matriz[i][j] = randomNumber(15,35);
        }
    }

    printMatriz(matriz,tamanho);

    posicaoMatriz(matriz,tamanho);
}

void posicaoMatriz(int matriz[10][10], int tam){
    int i,j,flag=0;
    printf("\n\n** Valor do número na posição da matriz **\n\n");

    while(flag != -1){
        printf("Digite o número da linha:\n");
        scanf("%d",&i);
        printf("Digite o número da coluna:\n");
        scanf("%d",&j);
        if(i > tam || j > tam){
            printf("Valor acima do tamanho da matriz, o valor da linha e da coluna não pode ultrapassar o tamanho de %d\n",tam);
            scanf("%d",&flag);
            continue;
        }

        printf("O valor que está na linha %d e na coluna %d é %d\n\n",i,j,matriz[i][j]);

        printf("Você deseja ver mais algum número?\n");
        printf("Digite -1 para finalizar\n>");
        scanf("%d",&flag);
    }
}




void ex05(){
    int tamanho = 10;
    int matriz[tamanho][tamanho];
    for(int i=0; i< tamanho; i++){
        for(int j=0; j< tamanho ; j++){
            matriz[i][j] = randomNumber(15,35);
        }
    }
    printMatriz(matriz,tamanho);

    encontrarNumero(matriz,tamanho);

}

void encontrarNumero(int matriz[10][10], int tam){
    int flag = 0,num,found;
    
    while(flag != -1){
        printf("Digite um número para encontrá-lo na matriz:");
        scanf("%d",&num);
        for(int i = 0; i < tam;i++){
            for(int j = 0; j < tam ; j++){
                if(matriz[i][j] == num){
                    printf("O valor foi encontrado!\n");
                    printf("O valor está na linha %d e na coluna %d\n\n",i,j);
                    found = 1;
                }
            }
        }

        if(found != 1)
            printf("O valor %d não foi encontrado na matriz\n",num);
        

        printf("Você deseja ver mais algum número?\n");
        printf("Digite -1 para finalizar\n>");
        scanf("%d",&flag);
    }
}

void ex06(){
    int numero;
    printf("\nInsira um numero: ");
    scanf("%i", &numero);


}

float retornaArray(){
    
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