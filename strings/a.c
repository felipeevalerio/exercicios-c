#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigo,idadem,salariom,idadeh,salarioh,nim,nsm,nih,nsh,nh=0,nm=0,mediaidadesm,maiorsh,menorsh,hcmaisdesessenta=0,i,somaidades=0;
    char sexo;
    printf("Me diga o código(digite um negativo para poder cancelar!)\n");
    scanf("%d",&codigo);
    maiorsh=1;
    menorsh=1000000000;
    while(codigo>=1)
    {
        printf("Qual o sexo?(M para masculino, F para feminino\n");
        scanf(" %c",&sexo);
        if(sexo=='F'){
            nm++;
            printf("Qual a idade\n");
            scanf("%d",&idadem);
            if(idadem>=18 && idadem<=100){
                printf("Digite o seu salario\n");
                scanf("%d",&salariom);
                somaidades= somaidades + idadem;
            }
            else{
                printf("Digite uma idade entre 18 e 100\n");
            }
        }
        if(sexo=='M'){
            nh++;
            printf("Qual a idade\n");
            scanf("%d",&idadeh);
            if(idadeh>=18 && idadeh<=100){
                printf("Digite o seu salario\n");
                scanf("%d",&salarioh);
                if(salarioh>maiorsh){
                    maiorsh=salarioh;
                }
                if(menorsh>salarioh){
                    menorsh=salarioh;
                }
                if(idadeh>60){
                    hcmaisdesessenta++;
                }
            }
            else{
                printf("Digite uma idade entre 18 e 100\n");
            }
        }
        printf("Me diga o código(digite um negativo para poder cancelar!)\n");
        scanf("%d",&codigo);
    }
    mediaidadesm=somaidades/nm;
    printf("A media de idade das mulheres é igual a %d\n",mediaidadesm);
    printf("O maior salário dos homens é de %d e o menor de %d\n",maiorsh,menorsh);
    printf("O numero de homems com mais de 60 é de %d\n",hcmaisdesessenta);
    return 0;
}

