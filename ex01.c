#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ex01();
int ex02();
int ex03();
int ex04();


int main(){
    ex01();
    ex02();
    ex03();
    ex04();
}       

int ex01(){
    printf("\n Exercício 01 \n");
    int n1,n2;
    double media;

    printf("Digite um valor");
    scanf("%d",&n1);
    printf("Digite outro valor");
    scanf("%d",&n2);
    media = (n1 + n2) / 2;
    printf("A média de %d e %d é igual a %lf",n1,n2,media);

    return media;
}

int ex02(){
    printf("\n Exercício 02 \n");
    double volume,pi,raio,altura,potencia;

    printf("Digite o valor da altura:");
    scanf("%lf",&altura);
    printf("Digite o valor do raio:");
    scanf("%lf",&raio);
    pi = 3.14;
    potencia = raio * raio;
    volume = pi * potencia * altura;
    printf("O volume é igual a %.2lf",volume);
    return 0;

}

int ex03(){
    printf("\n Exercício 03 \n");

    int dias;
    double liquida,total;
    printf("O encanador é pago 20 reais por dia. \n");
    printf("Digite o número de dias para o encanador \n");
    scanf("%d",&dias);
    total = 20 * dias;
    liquida =  total - (8 * total / 100);
    printf("O encanador recebera %.2lf \n",liquida);
    return 0;
}

int ex04(){
    printf("\n Exercício 04 \n");

    int hamburger,batata,xburger,refri,milk;
    double hTotal,xTotal,bTotal,refriTotal,milkTotal,total;
    
    printf(" ---------- Cardápio ---------- \n");
    printf("Digite o número de hamburguers que voce comeu: \n");
    scanf("%d",&hamburger);

    printf("Digite o número de xburguer que voce comeu: \n");
    scanf("%d",&xburger);

    printf("Digite o número de batatas fritas que voce comeu: \n");
    scanf("%d",&batata);

    printf("Digite o número de refrigerantes que voce tomou: \n");
    scanf("%d",&refri);

    printf("Digite o número de milkshakes que voce tomou: \n");
    scanf("%d",&milk);

    hTotal = 30 * hamburger;
    xTotal = 35.5 * xburger;
    bTotal = 20.5 * batata;
    refriTotal = 10 * refri;
    milkTotal = 30 * milk;

    total = hTotal + xTotal + bTotal + refriTotal + milkTotal;

    printf("------ CONTA ------ \n\n");
    printf(" %d Hamburguer => %.2lf \n",hamburger,hTotal);
    printf(" %d Xburguer => %.2lf \n",xburger,xTotal);
    printf(" %d Batata Frita => %.2lf \n",batata,bTotal);
    printf(" %d Refrigerante => %.2lf \n",refri,refriTotal);
    printf(" %d Milkshake => %.2lf \n",milk,milkTotal);
    printf("TOTAL => %.2lf \n",total);
    
    return 0;
}