#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int check();

int main(){
    setlocale(LC_ALL, "portuguese");
    int ex=0;
    while(ex >= 0){
        printf("[1]Exercício 01\n[2]Exercício 02\n[3]Exercício 03\n[4]Exercício 04\n[5]Exercício 05\n[6]Exercício 06\n");
        printf("Digite um número entre 1 a 6 para ver o exercício:\n");
        scanf("%d",&ex);
        switch(ex){
            case 1:
                printf("Exercício 01 \n");
                ex01();
                printf("--------------------------------\n");
                check(ex);

                break;
            case 2:
                printf("Exercício 02 \n");
                ex02();
                check(ex);
                printf("--------------------------------\n");

                break;
            case 3:
                printf("Exercício 03 \n");
                ex03();
                check(ex);
                printf("--------------------------------\n");

                break;
            case 4:
                printf("Exercício 04 \n");
                ex04();
                check(ex);
                printf("--------------------------------\n");

                break;
            case 5:
                printf("Exercício 05 \n");
                ex05();
                check(ex);
                printf("--------------------------------\n");

                break;
            case 6:
                printf("Exercício 06 \n");
                ex06();
                check(ex);
                printf("--------------------------------\n");

                break;
            default:
                printf("Número inválido, por favor insira um número entre 1 a 6\n");
                check(ex);
                printf("--------------------------------\n");

                break;
        }
    }
    return 0;
}

int check(int ex){
    int choice;
    printf("Você deseja ver outro exercício?\n");
    printf("[1]Sim\n[2]Não\n");
    scanf("%d",&choice);

    if(choice == 1)
        ex = 0;
    else
        ex = -1;
    
    return ex;
}

int ex01(){
    int num = 1;
    while(num <= 10){
        printf("%d\n",num);
        num = num + 1;
    }
    return 0;
}

int ex02(){
    int num = 10;
    while(num > 1){
        printf("%d\n",num);
        num = num - 1;
    }
    return 0;
}

int ex03(){
    int num,impar = 1;
    printf("Digite um número para ver de 1 até ele:");
    scanf("%d",&num);
    while(impar <= num){
        printf("%d\n",impar);
        impar = impar + 2;
    }
    return 0;
}
int ex04(){
    int num,fatorial=1;
    printf("Digite um número para ver seu fatorial:");
    scanf("%d",&num);
    // 5
    while(num > 0){
        fatorial = num * fatorial;
        num --;
    }

    printf("O fatorial de %d é %d\n",num,fatorial);
    return 0;
}
int ex05(){
    int i=3,num,fibo1=1,fibo2=1,soma;
    printf("Digite um número para ver a série de fibonnaci deste termo");
    scanf("%d",&num);

    if(num <= 2){
        printf("Digite um número maior do que 2\n");
        return 0;
    }

    printf("Fibonacci => %d\n",fibo1);
    printf("Fibonacci => %d\n",fibo2);    

    while(i < num){
        soma = fibo1 + fibo2;
        printf("Fibonacci => %d\n",soma);                    
        fibo1 = fibo2;                           
        fibo2 = soma;
        i++;
    }
    
    return 0;
}
int ex06(){
    int num,soma,potencia,n1,n2,n3,n4,aux;
    printf("Digite um número para ver se possui esta característica:");
    scanf("%d",&num);

    if(num < 1000){
        printf("Digite um número maior do que 999\n");
        return 0;
    }
        //3025
    n1 = num / 1000; 
    aux = num % 1000;
    n2 = aux / 100; 
    aux = num % 100; 
    n3 = aux / 10;
    n4 = num % 10;

    soma = (n1 * 10 + n2) + (n3 * 10 + n4);
    potencia = pow(soma,2);

    if(potencia == num)
        printf("%d == %d. Possui esta característica\n",num,potencia);
    else
        printf("%d != %d. Não possui esta característica\n",num,potencia);

    return 0;
}
