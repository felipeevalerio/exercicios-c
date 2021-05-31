#include <stdio.h>
#include <stdlib.h>

int fat(int num);

int main(){
    int n;
    printf("Digite um número:");
    scanf("%d",&n);

    printf("O fatorial de %d é %d\n",n,fat(n));
    return 0;
}


int fat(int num){
    if(num == 1)
        return 1;

    else
        return num * fat(num - 1);

    return num;
}