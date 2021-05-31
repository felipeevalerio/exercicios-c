#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void ex01();
void ex02();
void ex03();
void ex04();
void ex05();
void ex06();
void ex07();
void ex08();
void ex09();
void ex10();
int check();

int main(){
    int ex=1,aux;
    while(ex > 0){
        printf("Digite o número do exercício para poder ver o exercício.\n");
        printf("[1] Exercício 01\n[2] Exercício 02\n[3] Exercício 03\n[4] Exercício 04\n[5] Exercício 05\n");
        scanf("%d",&ex);
        switch(ex){
            case 1:
                printf("Exercício 01\n");
                ex01();
                ex = check();
                break;
            case 2:
                printf("Exercício 02\n");
                ex02();
                ex = check();
                break;
            case 3:
                printf("Exercício 03\n");
                ex03();
                ex = check();
                break;
            case 4:
                printf("Exercício 04\n");
                ex04();
                ex = check();
                break;
            case 5:
                printf("Exercício 05\n");
                ex05();
                ex = check();
                break;
            default:
                printf("Exercício inválido,por favor escolha um número entre 1 a 10\n");
                ex = 1;
                break;
        }
    }

    system("pause");
    return 0;
}

int check(){
    int choice;
    printf("----------------------\n");
    printf("Você deseja ver outro exercício?\n");
    printf("[1] Sim\n[2] Não\n");
    scanf("%d",&choice);
    if(choice == 1)
        choice = 1;
    else
        choice = 0;
    #ifdef WIN32
        system("cls");
    #else
        system("clear");
    #endif
    return choice;
}



int fat=1; 


void ex01(){
    int num;
    printf("Digite um número para ver seu fatorial:");
    scanf("%d",&num);
    fatorial(num);
    printf("O valor de %d! é %d.\n",num,fat);
}

void fatorial(int num){
    for(num;num > 0;num--){
        fat = fat * num;
    }
}


/* 2- Elabore um procedimento que receba um valor passado por parâmetro. 
Esse procedimento deverá devolver na variável global Fibo termo correspondente 
ao valor passado da serie de Fibonacci. */

int fib;

void ex02(){
    int terms;
    printf("Digite o numero de termos:");
    scanf("%d",&terms);
    fibonacci(terms);
    printf("O valor da série de fibonacci até o %d° termo é %d.\n",terms,fib);
}

void fibonacci(int terms){
    fib = 0;                              
    int i, fib1 = 1, fib2 = 1, soma;         
    for (i = 3; i<= terms; i++){                                        
        soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma;                           
    }
    fib = fib2;
}

/* 3 - Elabore um procedimento que receba um valor passado por parâmetro. 
Esse procedimento deverá devolver na variável global Fiba soma dos termos da serie de Fibonacci do 
primeiro termo até o termo passado. */ 

void ex03(){
    int terms;
    printf("Digite o numero de termos:");
    scanf("%d",&terms);
    somaFibonacci(terms);
    printf("O valor de soma da série de fibonacci até o %d° termo é %d.\n",terms,fib);
}

void somaFibonacci(int terms){
    fib = 0;         
    int i, fib1 = 1, fib2 = 1, soma,somaNumeros;
    for (i = 3; i<= terms; i++){                                        
        soma = fib1 + fib2; 
        fib1 = fib2;                           
        fib2 = soma;
                        
    }
    fib = somaNumeros;
}


/* 4 - Elabore um procedimento que receba dois valores passados por parâmetro. 
Esse procedimento  deverá atribuir a variável impar, a quantidade de números ímpares entre o intervalo fechado 
correspondente aos valores passados. 
*/

int impar;

void ex04(){
    int num1,num2;
    printf("Digite um número:");
    scanf("%d",&num1);
    printf("Digite outro número:");
    scanf("%d",&num2);
    intervalo(num1,num2);
    if(num2 > num1)
        printf("O número de ímpares entre %d e %d é de %d.\n",num1,num2,impar);
    else
        printf("O número de ímpares entre %d e %d é de %d.\n",num2,num1,impar);

}

void intervalo(int n1, int n2){
    impar = 0;
    if(n2 > n1 ){
        while(n1 <= n2){
            if(n1 % 2 != 0)
                impar++;
            n1++;
        }

    }
    else{
        while(n1 >= n2){
            if(n1 % 2 != 0)
                impar++;
            n1--;
        }
    }
}


/* 5 - Elabore um procedimento que receba dois valores passados por parâmetro. 
Esse procedimento  deverá atribuir a variável impar, a soma dos números ímpares entre o intervalo fechado correspondente
aos valores passados. */

int somaNum;
void ex05(){
    int num1,num2;
    printf("Digite um número:");
    scanf("%d",&num1);
    printf("Digite outro número:");
    scanf("%d",&num2);
    soma(num1,num2);
    if(num2 > num1)
        printf("A soma dos números ímpares no intervalo de %d e %d é de %d\n",num1,num2,somaNum);
    else
        printf("A soma dos números ímpares no intervalo de %d e %d é de %d\n",num2,num1,somaNum);
}


void soma(int n1,int n2){
    impar = 0,somaNum=0;
    if(n2 > n1 ){
        while(n1 <= n2){
            if(n1 % 2 != 0){
                impar++;
                somaNum += n1;
            }
            n1++;
        }

    }
    else{
        while(n1 >= n2){
            if(n1 % 2 != 0){
                impar++;
                somaNum += n1;
            }
            n1--;
        }
    }
}
