#include <stdio.h>
#include <stdlib.h>

int soma(int num);

int main(){
    int n;
    printf("Digite um número:");
    scanf("%d",&n);

    printf("A soma de 1 até %d é %d\n",n,soma(n));
    return 0;
}

int soma(int num){
    if(num == 1){
        return 1;
    }
    else
        return num + soma(num - 1);
}