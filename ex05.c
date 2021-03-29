#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

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
int ex11();
int ex12();
int ex13();
int ex14();
int ex15();

int main()
{
    setlocale(LC_ALL, "portuguese");
    printf("Ex01 \n");
    ex01();
    printf("------------------------ \n \n");
    printf("Ex02 \n");
    ex02();
    printf("------------------------ \n \n");
    printf("Ex03 \n");
    ex03();
    printf("------------------------ \n \n");
    printf("Ex04 \n");
    ex04();
    printf("------------------------ \n \n");
    printf("Ex05 \n");
    ex05();
    printf("------------------------ \n \n");
    printf("Ex06 \n");
    ex06();
    printf("------------------------ \n \n");
    printf("Ex07 \n");
    ex07();
    printf("------------------------ \n \n");
    printf("Ex08 \n");
    ex08();
    printf("------------------------ \n \n");
    printf("Ex09 \n");
    ex09();
    printf("------------------------ \n \n");
    printf("Ex10 \n");
    ex10();
    printf("------------------------ \n \n");
    printf("Ex11 \n");
    ex11();
    printf("------------------------ \n \n");
    printf("Ex12 \n");
    ex12();
    printf("------------------------ \n \n");
    printf("Ex13 \n");
    ex13();
    printf("------------------------ \n \n");
    printf("Ex14 \n");
    ex14();
    printf("------------------------ \n \n");
    printf("Ex15 \n");
    ex15();
    printf("------------------------ \n \n");

    return 0;
}

int ex01(){
    int numero;
    printf("Digite um número para ver se ele é par: \n");
    scanf("%d",&numero);
    
    printf("%d é par ? %d \n",numero,numero % 2 == 0);
    
    return 0;
}

int ex02(){
    int numero;
    printf("Digite um número para ver se ele é ímpar: \n");
    scanf("%d",&numero);
    
    printf("%d é par ? %d \n",numero,numero % 2 != 0);
    
    return 0;
}

int ex03(){
    int numero;
    printf("Digite um número para ver se ele é ímpar e maior do que 100: \n");
    scanf("%d",&numero);

    printf("%d é ímpar e maior do que 100 ? %d \n",numero,numero % 2 != 0 && numero > 100);

    return 0;
}

int ex04(){
    int numero;
    printf("Digite um número para ver se ele é ímpar e maior do que 100 ou par e menor que 100: \n");
    scanf("%d",&numero);

    printf("%d é ímpar e maior do que 100 ? %d \n",numero,numero % 2 != 0 && numero > 100);
    printf("%d é par e menor do que 100 ? %d \n",numero,numero % 2 == 0 && numero < 100);

    return 0;
}

int ex05(){
    int numero;
    printf("Digite um número para ver se ele pertence ao intervalo aberto entre (25:75): \n");
    scanf("%d",&numero);

    printf("O número %d pertence ao intervalo entre (25:75) ? %d \n",numero,numero > 25 && numero < 75);
    return 0;
}

int ex06(){
    int numero;
    printf("Digite um número para ver se ele pertence ao intervalo fechado entre (25:75): \n");
    scanf("%d",&numero);

    printf("O número %d pertence ao intervalo entre (25:75) ? %d \n",numero,numero >= 25 && numero <= 75);
    return 0;
}

int ex07(){
    int numero;
    printf("Digite um número para ver se ele pertence aos intervalos fechados [15:45] ou [66:99]: \n");
    scanf("%d",&numero);

    printf("O número %d pertence aos intervalos fechados [15:45] ou [66:99] ? %d \n",numero,
        (numero >= 25 && numero <= 75) || (numero >= 66 && numero <= 99));
    printf("O número %d pertence ao intervalo entre (25:75) ? %d \n",numero,numero >= 25 && numero <= 75);
    printf("O número %d pertence ao intervalo entre (66:99) ? %d \n",numero,numero >= 66 && numero <= 99);

    return 0;
}

int ex08(){
    int n1,n2;
    printf("Digite dois valores para ver se o 1° é par e o 2° é ímpar \n");

    printf("Digite o valor do primeiro número: \n");
    scanf("%d",&n1);
    printf("Digite o valor do segundo número: \n");
    scanf("%d",&n2);

    printf("O primeiro número %d é par? %d \n",n1,n1 % 2 == 0);
    printf("O segundo número %d é ímpar? %d \n",n2,n2 % 2 != 0);

    return 0;
}

int ex09(){
    int n1,n2;
    printf("Digite dois valores para ver se o 1° é par e positivo e o 2° é ímpar e negativo \n");

    printf("Digite o valor do primeiro número: \n");
    scanf("%d",&n1);
    printf("Digite o valor do segundo número: \n");
    scanf("%d",&n2);

    printf("O primeiro número %d é par e positivo? %d \n",n1,n1 % 2 == 0 && n1 > 0);
    printf("O segundo número %d é ímpar e negativo? %d \n",n2,n2 % 2 != 0 && n2 < 0);

    return 0;
}

int ex10(){
    float n1,n2;
    printf("Digite o valor do primeiro número: \n");
    scanf("%f",&n1);
    printf("Digite o valor do segundo número: \n");
    scanf("%f",&n2);

    printf("%.2f > %.2f ? %d \n",n1,n2,n1 > n2);
    printf("%.2f < %.2f ? %d \n",n1,n2,n1 < n2);
    printf("%.2f = %.2f ? %d \n",n1,n2,n1 == n2);

    return 0;
}

int ex11(){
    float n1,n2,n3;
    printf("Digite o valor do primeiro número: \n");
    scanf("%f",&n1);
    printf("Digite o valor do segundo número: \n");
    scanf("%f",&n2);
    printf("Digite o valor do terceiro número: \n");
    scanf("%f",&n3);

    printf("O número %.2f está entre %.2f e %.2f ? %d \n",n1,n2,n3,(n2 > n1 && n3 < n1) || (n2 < n1 && n3 > n1));
                                                                        
    return 0;
}

int ex12(){ // Errado
    float n1,n2,n3;
    printf("Digite o valor do primeiro número: \n");
    scanf("%f",&n1);
    printf("Digite o valor do segundo número: \n");
    scanf("%f",&n2);
    printf("Digite o valor do terceiro número: \n");
    scanf("%f",&n3);

    printf("O número %.2f não está entre %.2f e %.2f ? %d \n",n1,n2,n3,(n2 > n3 && (n1 > n2 || n1 < n3)) || (n3 > n2 && (n1 > n3 || n1 < n2)) || (n2 == n3));
                                                                        
    return 0;
}

int ex13(){
    char c1,c2,c3;
    printf("Digite o valor do primeiro caractere: \n");
    scanf("%s",&c1);
    printf("Digite o valor do segundo caractere: \n");
    scanf("%s",&c2);
    printf("Digite o valor do terceiro caractere: \n");
    scanf("%s",&c3);
    printf("O caractere '%c' está entre '%c' e '%c' ? %d \n",c1,c2,c3,(c2 > c1 && c3 < c1) || (c2 < c1 && c3 > c1));

    return 0;
}   

int ex14(){
    char c1, c2 , c3;
    printf("Digite o valor do primeiro caractere: \n");
    scanf("%s",&c1);
    printf("Digite o valor do segundo caractere: \n");
    scanf("%s",&c2);
    printf("Digite o valor do terceiro caractere: \n");
    scanf("%s",&c3);
    printf("Os caracteres '%c' , '%c' e '%c' estão de forma crescente lexicograficamente ? %d \n",c1,c2,c3,(c1 < c2 && c2 < c3));

    return 0;
}

int ex15(){
    char c;
    printf("Digite um caractere para ver se ele é maiúsuculo: \n");
    scanf("%s",&c);
    printf("O caractere %c é maiúsculo ? %d \n",c,isupper(c) ? 1 : 0);
    return 0;
}