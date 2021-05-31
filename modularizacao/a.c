#include <stdio.h>
#include "lib.h"

int main(){
    int fat,num;
    printf("Digite um número para ver seu fatorial:");
    scanf("%d",&num);
    fat = fatorial(num);
    printf("%d\n",fat);
    return 0;
}

