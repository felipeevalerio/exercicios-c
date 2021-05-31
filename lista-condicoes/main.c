#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();

int main(){
    setlocale(LC_ALL,"portuguese");
    printf("Ex01 \n");
    ex01();
    printf("--------------------------------\n");
    printf("Ex02 \n");
    ex02();
    printf("--------------------------------\n");
    printf("Ex03 \n");
    ex03();
    printf("--------------------------------\n");
    
    return 0;
}

int ex01(){
    int age;
    printf("Digite a sua idade: \n");
    scanf("%d",&age);
    if(age >= 18){
        printf("Maior de idade\n");
    }
    if(age < 18){
        printf("Menor de idade\n");
    }
    return 0;
}

int ex02(){
    int num;
    printf("Digite um número:\n");
    scanf("%d",&num);
    if(num % 2 == 0){
        printf("O número %d é par\n",num);
    }
    if(num % 2 != 0){
        printf("O número %d é ímpar\n",num);
    }
    return 0;
}

int ex03(){
    int choice;
    printf("Digite um valor de 1 até 5 para ver o item do cardápio\n");
    scanf("%d",&choice);
    if(choice == 1){
        printf("Hambúrguer...............  R$ 30,00\n");
    }
    if(choice == 2){
        printf("Cheeseburger.............. R$ 35,50\n");
    }
    if(choice == 3){
        printf("Fritas.................... R$ 20,50 \n");
    }
    if(choice == 4){
        printf("Refrigerante.............. R$ 10,00\n");
    }    
    if(choice == 5){
        printf("Milk-shake................ R$ 30,00\n");
    }       
    if(choice < 1 || choice > 5){
        printf("Produto inexistente\n");
    }
    return 0;
        
}