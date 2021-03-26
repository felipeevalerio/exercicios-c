#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int a();
int b();
int c();
int d();
int e();
int f();
int g();
int h();
int i();
int j();


int main(){
    setlocale(LC_ALL,"portuguese");
    printf("Letra A \n");
    a();
    printf("------------------------ \n \n");
    printf("Letra B \n");
    b();
    printf("------------------------ \n \n");
    printf("Letra C \n");
    c();
    printf("------------------------ \n \n");
    printf("Letra D \n");
    d();
    printf("------------------------ \n \n");
    printf("Letra E \n");
    e();
    printf("------------------------ \n \n");
    printf("Letra F \n");
    f();
    printf("------------------------ \n \n");
    printf("Letra G \n");
    g();
    printf("------------------------ \n \n");
    printf("Letra H \n");
    h();
    printf("------------------------ \n \n");
    printf("Letra I \n");
    i();
    printf("------------------------ \n \n");
    printf("Letra J \n");
    j();
    printf("------------------------ \n \n");
    return 0;
}

int a(){
    int num,sucessor;
    printf("Digite um número para ver seu sucessor: \n \n");
    scanf("%d",&num);
    sucessor = num + 1;
    printf("O sucessor do número %d é %d \n",num,sucessor);
    return 0;
}

int b(){
    float n1,n2,n3,n4,media;
    printf("Digite o primeiro valor: \n \n");
    scanf("%f",&n1);
    printf("Digite o segundo valor: \n \n");
    scanf("%f",&n2);
    printf("Digite o terceiro valor: \n \n");
    scanf("%f",&n3);
    printf("Digite o quarto valor: \n \n");
    scanf("%f",&n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A média dos números %.1f , %.1f , %.1f , %.1f é %.2f \n",n1,n2,n3,n4,media);
    return 0;
}

int c(){
    int p1,p2,p3;
    float n1,n2,n3,media;

    printf("Digite o valor do primeiro peso: \n ");
    scanf("%d",&p1);
    printf("Digite o valor do segundo peso: \n ");
    scanf("%d",&p2);
    printf("Digite o valor do terceiro peso: \n ");
    scanf("%d",&p3);

    printf("Digite o valor da primeira nota: \n ");
    scanf("%f",&n1);
    printf("Digite o valor da segunda nota: \n ");
    scanf("%f",&n2);
    printf("Digite o valor da terceira nota: \n ");
    scanf("%f",&n3);

    media = (p1 * n1) + (p2 * n2) + (p3 * n3) / (p1+ p2+ p3);
    printf("A média ponderada é %.2f \n",media);

    return 0;
}

int d(){
    float celsius,fahrenheit;
    printf("Digite o valor de uma temperatura em celsius: \n");
    scanf("%f",&celsius);

    fahrenheit = 1.8 * celsius + 32;

    printf("Temperatura em °C => %.1f °C \n",celsius);
    printf("Temperatura em °F => %.1f °F \n",fahrenheit);
    return 0;
}

int e(){
    float salario,aumento,novoSalario;
    printf("Digite o salário atual do funcionário: \n");
    scanf("%f",&salario);
    printf("Digite o percentual de aumento do funcionário: \n");
    scanf("%f",&aumento);
    novoSalario = salario +  (aumento / 100 * salario); 
    printf("O novo salário do funcionário é %.2f \n",novoSalario);
    return 0;
}

int f(){
    float base,altura,area;
    printf("Digite o valor da base do triângulo: \n");
    scanf("%f",&base);
    printf("Digite o valor da altura do triângulo: \n");
    scanf("%f",&altura);
    area = base * altura / 2;
    printf("A área do triângulo é %.2f \n",area);
    return 0;
}

int g(){
    int gramas,kilos,quantidade,peso,total;
    printf("Digite o peso do saco de ração (em Kg): \n");
    scanf("%d",&kilos);
    printf("Qual a quantidade de ração para cada gato (em g): \n");
    scanf("%d",&quantidade);
    
    gramas = kilos * 1000;

    total = gramas - quantidade * 5 * 2;
    printf("Depois de 5 dias restará %d gramas \n",total);
    return 0;
}

int h(){
    int a,b,aux;
    printf("Digite o valor de A: \n");
    scanf("%d",&a);
    printf("Digite o valor de B: \n");
    scanf("%d",&b);

    aux = a;
    b = a;
    a = aux;

    printf("Os valores invertidos é de A = %d e o de B = %d \n",a,b);
    return 0;
}

int i(){
    int numero,resultado;
    printf("Digite um número para ver o resto da divisão por 7: \n");
    scanf("%d",&numero);
    resultado = numero % 7;
    printf("O resto da divisão de %d por 7 é %d \n",numero,resultado);
    return 0;
}

int j(){
    int a1,a2,numeroTermos;
    printf("Digite o primeiro termo da P.A: \n");
    scanf("%d",&a1);
    printf("Digite o segundo termo da P.A: \n");
    scanf("%d",&a2);
    printf("Digite o número de termos da P.A: \n");
    scanf("%d",&numeroTermos);

    int an,r,sn;
    r = a2 - a1;
    an = a1 + (numeroTermos - 1) * r;
    sn = numeroTermos * (a1 + an) / 2;
    
    printf("A soma dos termos da P.A é %d \n",sn);
    return 0;
}