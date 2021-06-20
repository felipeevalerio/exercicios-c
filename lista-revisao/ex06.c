#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 5 – utilizando função passando N como parâmetro e retornando o valor

void serie(int);
float retornaValor(float);

int main(){
    setlocale(LC_ALL,"portuguese");    
    int terms;
    float total;
    printf("Quantos termos você quer que seja apresentado: ");
    scanf("%d",&terms);

    serie(terms);
    return 0;

}

void serie(int terms){
    int numerador= 1,n2=0,denominador=2;
    float res,fra,sinal=1;
    char s;

    res = (float)numerador / denominador;

    if(terms == 1)
        printf("%d/%d = %.2f",numerador,denominador,res);
    
    else{
        printf(" %c %d/%d",s,numerador,denominador);
        for(int i=2;i<=terms;i++){
            denominador += 2;
            numerador += n2;
            n2 = numerador - n2;
            if(i % 2 == 0){
                sinal = 1;
                s = '+';
            }
            else{
                sinal = -1;
                s = '-';
            }
            fra = (float) numerador / denominador * sinal;
            res += fra;            
            
            printf(" %c %d/%d",s,numerador,denominador);
        }
        retornaValor(res);
    }
}

float retornaValor(float total){
    printf(" = %.2f\n",total);

    return total;
}