#include <stdio.h>
#include <stdlib.h>

int potencia(int x,int y);

int main(){
    int x,y;
    printf("Digite um número:");
    scanf("%d",&x);
    printf("Digite outro número:");
    scanf("%d",&y);

    printf("A potencia de %d e %d é %d\n",x,y,potencia(x,y));
    return 0;
}

int potencia(int x,int y){
    if(y == 0){
        return 1;
    }
    else
        return x * potencia(x,y - 1);

    return x;
}