#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Carro { 
    public:
        char marca[20];
        char cor[20];
        int anoFabricacao;
        float valor;
        float calculaIPVA(int anoAtual){
            int anoTotal = anoAtual - anoFabricacao;
            float ipva = (valor * 5 / 100) - (anoTotal * 10 / 100);
            return ipva;
        };
};

int main(){
    Carro c;
    float ipva;
    int anoAtual=2021;

    system("clear");

    printf("Digite a marca do carro:");
    scanf("%s", &c.marca);
    printf("Digite a cor do carro:");
    scanf("%s", &c.cor);
    printf("Digite o ano de fabricação do carro:");
    scanf("%d", &c.anoFabricacao);
    printf("Digite o valor do carro:");
    scanf("%f", &c.valor);

    ipva = c.calculaIPVA(anoAtual);

    printf("marca do carro => %s\n",c.marca);
    printf("cor do carro => %s\n",c.cor);
    printf("ano de fabricação do carro => %d\n",c.anoFabricacao);
    printf("valor do carro => %.2f\n",c.valor);

    printf("IPVA do carro => %.2f\n",ipva);


    return 0;
}