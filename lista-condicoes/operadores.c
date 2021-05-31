#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int x = 1, a = 3, b = 5, c = 8 , d = 7;

int main(){
    printf("Exercício 01\n");

    ex01();
    printf("\n------------------------------------------------\n");
    printf("Exercício 02\n");
    ex02();
    printf("\n------------------------------------------------\n");
    printf("Exercício 03\n");
    ex03();
    printf("\n------------------------------------------------\n");
    printf("Exercício 04\n");
    ex04();
    printf("\n------------------------------------------------\n");
    printf("Exercício 05\n");
    ex05();
    printf("\n------------------------------------------------\n");
    printf("Exercício 06\n");
    ex06();
    printf("\n------------------------------------------------\n");
    printf("Exercício 07\n");
    ex07();
    printf("\n------------------------------------------------\n");
    printf("Exercício 08\n");
    ex08();
    printf("\n------------------------------------------------\n");
    printf("Exercício 09\n");
    ex09();
    printf("\n------------------------------------------------\n");
    printf("Exercício 10\n");
    ex10();
    printf("\n------------------------------------------------\n");
    return 0;
}

int ex01(){
    printf("%s",!(x > 3) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex02(){
    printf("%s",(x<1) && !(b>d) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex03(){
    printf("%s",!(d<7) && (c>5) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex04(){
    printf("%s",!(x>3) || (c<7) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex05(){
    printf("%s",(a > b) || (c > b) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex06(){
    printf("%s",(x>=2) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex07(){
    printf("%s",(x <1) && (b>=d) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex08(){
    printf("%s",((d>0) || (c>5)) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex09(){
    printf("%s",!(d>3) || !(b<7) ? "Verdadeira" : "Falsa");
    return 0;
}

int ex10(){
    printf("%s",(a>b) || !(c>b) ? "Verdadeira" : "Falsa");
    return 0;
}