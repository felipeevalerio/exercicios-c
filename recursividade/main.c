#include <stdio.h>
#include <stdlib.h>

int rest(int a ,int b);
int recursive(int a, int b);

int main(){
    int x,y;
    printf("Digite um número:");
    scanf("%d",&x);
    printf("Digite outro número:");
    scanf("%d",&y);

    printf("O resto da divisão de %d por %d == %d\n",x,y,recursive(x,y));
    return 0;
}

int rest(int a, int b){
    while(a >= b)
        a-=b;
    
    return a;   
}


int recursive(int a, int b){
    if(a < b)
        return a;
    else
        return recursive(a-b,b);

    return a;
}