#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void somas(int *,int);
void matriz(int *,int);


int main(){
    int vetor[10],tam=10;
    for(int i = 0; i < 10; i++){
        printf("Digite um valor:");
        scanf("%d",&vetor[i]);
    }
    somas(vetor[10],tam);
    matriz(vetor[10],tam);
    return 0;
}

void somas(int *vetor,int tam){
    int operacao=0,soma=0;
    printf("1 => Soma dos números pares\n2 => Soma dos números ímpares\n");
    scanf("%d",&operacao);

    if(operacao == 1){
        for(int i = 0; i < tam;i++){
            if(vetor[i] % 2 == 0){
                soma += vetor[i];
            }
        }
        printf("A soma dos números pares é ");
    }

    else if(operacao == 2){
        for(int i = 0; i < tam;i++){
            if(!(vetor[i] % 2 == 0)){
                soma += vetor[i];
            }
        }
        printf("A soma dos números ímpares é ");
    }

    else{
        printf("Por favor, insira um número válido\n");
    }

    printf("%d\n",soma);
}

void matriz(int *vetor,int tam){
    int operacao=0,soma=0;
    printf("1 => Soma dos índices pares\n2 => Soma dos índices ímpares\n");
    scanf("%d",&operacao);

    if(operacao == 1){
        for(int i = 0; i < tam;i++){
            if(i % 2 == 0){
                soma += vetor[i];
            }
        }
        printf("A soma dos índices pares é ");
    }

    else if(operacao == 2){
        for(int i = 0; i < tam;i++){
            if(!(i % 2 == 0)){
                soma += vetor[i];
            }
        }
        printf("A soma dos índices ímpares é ");
    }

    else{
        printf("Por favor, insira um número válido\n");
    }

    printf("%d\n",soma);
}