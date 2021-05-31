#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();

int main(){
    setlocale(LC_ALL, "portuguese");
    printf("Exercício 01\n");
    ex01();
    printf("------------------------------------------------\n");
    printf("Exercício 02\n");
    ex02();
    printf("------------------------------------------------\n");
    printf("Exercício 03\n");
    printf("------------------------------------------------\n");
    ex03();
    return 0;
}

int ex01(){
    int age,olderThan18;
    printf("Digite sua idade: \n");
    scanf("%d",&age);
    if(age >= 18){
        printf("Maior de Idade\n");
    }else{
        printf("Menor de idade\n");
    }
    return 0;
}

int ex02(){
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("Par\n");
    }else{
        printf("Ímpar\n");
    }
    return 0;
}

int ex03(){
    int choice;
    printf("Digite um valor de 1 a 5 para ver o item do cardápio\n");
    scanf("%d",&choice);
    switch(choice){
        case (1): 
            printf("Hambúrguer...............  R$ 30,00\n");
            break;
        case (2): 
            printf("Cheeseburger.............. R$ 35,50\n");
            break;
        case (3): 
            printf("Fritas.................... R$ 20,50 \n");
            break;
        case(4): 
            printf("Refrigerante.............. R$ 10,00\n");
            break;
        case(5):
            printf("Milk-shake................ R$ 30,00\n");
            break;
        default:
            printf("Valor Inválido!\n");
    
    }
    return 0;
}