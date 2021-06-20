#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//3 – utilizando variáveis globais

void serie();

int numerador= 1,n2=0,denominador=2,terms;
float res,fra,sinal=1;
char s;


int main(){
    setlocale(LC_ALL,"portuguese");    
    serie();
    return 0;

}

void serie(){

    res = (float)numerador / denominador;

    printf("Quantos termos você quer que seja apresentado: ");
    scanf("%d",&terms);

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
        printf(" = %.2f\n",res);

    }
}

