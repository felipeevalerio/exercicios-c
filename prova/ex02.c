/*
    Escrever uma função que receba um valor e devolva no comando return um vetor de tamanho (valor) com elementos 
    entre 01 e 15.

    Utilize o comando malloc para criação do vetor.

    Escreva uma função que receba o vetor criado ,seu tamanho e um valor. 
    Remova desse vetor todas as ocorrências  valores maiores que valor. Lembre-se de atualizar a 
    variável tamanho.

    O programa principal deverá chamar as funções e mostrar o vetor antes e após a chamada da função que retira valor.
*/

#include <stdio.h>
#include <stdlib.h>

int *retornaArray(int valor);
int randomNumber(int inicial,int final);
int *removerDoArray(int *array,int tam, int valor);
int novoTamanho=0;


int main(){
    int tamanho,*novoArray;
    printf("Digite um valor para ser o tamanho do array:");
    scanf("%d",&tamanho);
    novoArray = retornaArray(tamanho);
    for(int i=0;i < tamanho ; i++){
        printf("%d\n",novoArray[i]);
    }

    int valor;
    printf("Digite um valor para remover todos os elementos que forem maiores do que este no array:");
    scanf("%d",&valor);

    novoArray = removerDoArray(novoArray,tamanho,valor);
    printf("\n\n**NOVO ARRAY**\n\n");
    for(int i=0;i < novoTamanho; i++){
        printf("%d\n",novoArray[i]);
    }
    return 0;
}

int *retornaArray(int valor){
    int *arr;
    arr = malloc(sizeof(int) * valor);
    for(int i= 0 ; i < valor;i++){
        arr[i] = randomNumber(1,14);
    }   
    
    return arr;
}

int randomNumber(int inicial,int final){
    int random;
    random = inicial + (rand() % final);
    return random;
}

int *removerDoArray(int *array,int tam, int valor){
    int *novoArray = malloc(sizeof(int) * tam);
    int indiceNovoArray = 0;
    
    for(int i = 0; i < tam;i++){
        if(valor >= array[i]){ // 4 > 2
            novoArray[indiceNovoArray] = array[i]; // 2
            indiceNovoArray++; // 1
            novoTamanho++; // 1
        }
    }

    return novoArray;
}