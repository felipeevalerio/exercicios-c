/*
    a) Faça uma função que receba uma matriz 10x10  e devolva essa matriz preenchida com valores 
    compreendidos entre 60 e 70.

    b) Faça uma função que receba uma matriz 10x10  e imprima essa matriz 

    c) Faça uma função que receba uma matriz 10x10  e devolva a média dos elementos que estão nas
    linhas 1, 3 e 5  dessa matriz

    d) Faça uma função que receba como parâmetros uma matriz 10x10  e um valor e escreva a localização 
    (linha e coluna) de todos os elementos da matriz que sejam o triplo desse valor ou a mensagem que não 
    existe valores com essa restrição.

    e) Faça um programa que chame as funções criadas.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int randomNumber(int,int);
float mediaLinhasMatriz(int matriz[10][10]);
int matrizPreenchida(int matriz[10][10]);
int printMatriz(int matriz[10][10]);
int triploValores(int matriz[10][10],int num);


int randomNumber(int inicial,int final){
    int random;
    random = inicial + (rand() % final);
    return random;
}

int main(){
    setlocale(LC_ALL, "portuguese");
    int matriz[10][10];
    matriz[10][10] = matrizPreenchida(matriz);

    printMatriz(matriz);

    float media = mediaLinhasMatriz(matriz);
    
    int valor;
    printf("Digite um valor para verificar se existe a restrição.\n>");
    scanf("%d",&valor);
    triploValores(matriz,valor);
    return 0;
}

int matrizPreenchida(int matriz[10][10]){
    for(int i=0;i < 10;i++){
        for(int j=0;j < 10 ; j++){
            matriz[i][j] = randomNumber(60,10);
        }
    }
    return matriz;
}


int printMatriz(int matriz[10][10]){
    for(int i=0;i < 10;i++){
        for(int j=0;j < 10 ; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return matriz;
}   

float mediaLinhasMatriz(int matriz[10][10]){
    float media=0;
    int soma=0,elementos=0;
    
    for(int i=0;i < 10;i++){
        for(int j=0;j < 10 ; j++){
            if(i == 0 || i == 2 || i == 4){
                soma += matriz[i][j];
                elementos++;
            }
        }
    }

    media = (float) soma / elementos;

    printf("\n\nA média dos elementos é de %.2f\n\n",media);

    return media;
}


int triploValores(int matriz[10][10],int num){
    int triploNum = num * 3;
    int encontrado=0;
    printf("\n\nO novo valor a ser procurado é o triplo de %d, que é %d.\n\n",num,triploNum);
    for(int i=0;i < 10 ; i++){
        for(int j=0;j < 10 ; j++){
            if(matriz[i][j] == triploNum){
                printf("O valor %d foi encontrado na matriz.\n",triploNum);
                printf("O valor está na linha %d e na coluna %d\n\n",i+1,j+1);
                encontrado = 1;
            }
        }
    }
    if(encontrado != 1){
        printf("Valor não possui essa restrição.\n");
    }
}