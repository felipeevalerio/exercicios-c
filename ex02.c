#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int ex01();

int ex02();
int ex02A();
int ex02B();
int ex02C();
int ex02D();
int ex02E();

int ex03();
int ex04();
int ex05();

int main () {
    setlocale(LC_ALL,"portuguese");
    printf("Exercício 01 \n");
    ex01();
    printf("-----------------------------\n");
    printf("Exercício 02 \n"); 
    ex02();
    printf("-----------------------------\n");
    printf("Exercício 03 \n");
    ex03();
    printf("-----------------------------\n");
    printf("Exercício 04 \n");
    ex04();
    printf("-----------------------------\n");
    printf("Exercício 05 \n");
    ex05();
    printf("-----------------------------\n");
    return 0;
}

int ex01(){
    float volume,diametro,raio,pi;
    pi = 3.14;
    
    printf("Digite o valor do diâmetro de uma esfera: ");
    scanf("%f",&diametro);
    raio = diametro / 2;
    volume = 4 * pi * (pow(raio,3)) / 3;
    printf("O valor do volume da esfera é igual a %.2f \n",volume);

    return 0;
}

int ex02(){
    printf("Letra A \n");
    ex02A();
    printf("-----------------------------\n");
    printf("Letra B \n");
    ex02B();
    printf("-----------------------------\n");
    printf("Letra C \n");
    ex02C();
    printf("-----------------------------\n");
    printf("Letra D \n");
    ex02D();
    printf("-----------------------------\n");
    printf("Letra E \n");
    ex02E();
    printf("-----------------------------\n");
}

int ex02A(){
    printf("2 > 3 ?%d \n",2 > 3);
    return 0; 
}

int ex02B(){
    printf("4 = 4 ?%d \n",4 == 4);
    return 0;
}

int ex02C(){
    float x,y;
    printf("Digite o valor de X: \n");
    scanf("%f",&x);
    printf("Digite o valor de y: \n");
    scanf("%f",&y);
    printf("%.2f > %.2f ?%d \n",x,y,x > y);
    printf("%.2f > %.2f ?%d \n",y,x,y > x);
    printf("%.2f = %.2f ?%d \n",x,y, x == y);  
    return 0;  
}

int ex02D(){
    float x,y,a,ypow,xpow1,xpow2,findPow;
    printf("Digite o valor de X: \n");
    scanf("%f",&x);
    printf("Digite o valor de Y: \n");
    scanf("%f",&y);
    printf("Digite o valor de A: \n");
    scanf("%f",&a);

    findPow = (int) a + 4;

    xpow1 = pow(x,2);
    xpow2 = pow(x,findPow);
    ypow = pow(y,3); 

    printf("A equação x ^ 2 - y ^ 3 > x ^ (a + 4) é ?%d \n",xpow1 - ypow > xpow2);
    printf("%.2f < 5 ?%d \n",a,a < 5);

    return 0;
}

int ex02E(){
    int a,b,c,resul,delta,x1,x2;

    printf("Digite o valor de A: \n");
    scanf("%d",&a);
    printf("Digite o valor de B: \n");
    scanf("%d",&b);
    printf("Digite o valor de C: \n");
    scanf("%d",&c);

    delta = pow(b,2) - 4 * a * c;    // 4 - 4 * 4 * 2
    
    if(a == 0 || delta < 0){
        printf("A função não possui raízes \n");
        return 0;
    }

    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("A raizes da função são x1 = %d e x2 = %d \n",x1,x2);
   
    return 0;
}

int ex03(){
    float x,y,diferenca;
    printf("Digite o valor de X: \n");
    scanf("%f",&x);
    printf("Digite o valor de Y: \n");
    scanf("%f",&y);

    if(x > y){
        diferenca = x - y;
        printf("%.2f - %.2f = 0 ?%d \n",x,y,diferenca == 0);
    }
    else{
        diferenca = y - x;
        printf("%.2f - %.2f = 0 ?%d \n",y,x,diferenca == 0);
    }
    return 0;
}

int ex04(){
    int p1,p2,diferenca;
    
    printf("Digite o valor de um ponto: \n");
    scanf("%d",&p1);
    printf("Digite o valor do outro ponto: \n");
    scanf("%d",&p2);

    if(p1 > p2){
        diferenca = p1 - p2;
        printf("A distância de %d e %d é igual a %d \n",p1,p2,diferenca);
    }else{
        diferenca = p2 - p1;
        printf("A distância de %d e %d é igual a %d \n",p2,p1,diferenca);
    }
    
    return 0;
}

int ex05(){
    int prof,calc,mat;
    printf("Digite o número de professores: \n");
    scanf("%d",&prof);
    printf("Quantos professores dão aula de Cálculo: \n");
    scanf("%d",&calc);
    mat = prof - calc;
    printf("O número de professores que dão aula de Matemática é %d \n",mat);
    return 0;
}