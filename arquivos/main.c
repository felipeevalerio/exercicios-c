#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void exA();
void exB();
void exC();
void exD();
void exE();

void fibonacci(FILE *);
int criaMatriz(float [8][8],FILE *);
void printMatriz(float [8][8]);

int check();

int main(){
    setlocale(LC_ALL, "portuguese");
    int ex=1;
    while(ex > 0){
        printf("Digite o número do exercício para poder ver o exercício.\n");
        printf("[1] Exercício A\n[2] Exercício B\n[3] Exercício C\n[4] Exercício D\n[5] Exercício E\n");
        scanf("%d",&ex);
        switch(ex){
            case 1:
                printf("Exercício A\n");
                exA();
                ex = check();
                break;
            case 2:
                printf("Exercício B\n");
                exB();
                ex = check();
                break;
            case 3:
                printf("Exercício C\n");
                exC();
                ex = check();
                break;
            case 4:
                printf("Exercício D\n");
                exD();
                ex = check();
                break;
            case 5:
                printf("Exercício E\n");
                exE();
                ex = check();
                break;

            default:
                printf("Exercício inválido,por favor escolha um número entre 1 a 10\n");
                ex = 1;
                break;
        }
    }


    return 0;
}


void exA(){
    printf("\n\nGravar em um arquivo os 64 primeiros valores da série: 1 1 2 3 5 8 13 21 34....\n\n");
    FILE *fp;
    
    if((fp = fopen("arquivo.txt","w")) == NULL )
        printf("Erro de Abertura\n");

    else{
        fibonacci(fp);
        fclose(fp);
        printf("Arquivo criado com sucesso!\n");    
    }

}

void fibonacci(FILE *fp){
    float fibo1=1,fibo2=1,soma=0;
    int i = 3;
    fprintf(fp,"%.0f\n",fibo1);
    fprintf(fp,"%.0f\n",fibo2);    

    for (i; i <= 64; i++) { 
        soma = fibo1 + fibo2;
        fprintf(fp,"%.0f\n",soma);                    
        fibo1 = fibo2;                           
        fibo2 = soma;
    }
}

void exB(){
    printf("\n\nLer o arquivo letra a e armazenar os dados em uma matriz 8 x 8 imprima essa matriz na tela\n\n");

    FILE *fp;
    float matriz[8][8];

    if((fp = fopen("arquivo.txt","r")) == NULL )
        printf("Erro de Abertura\n");

    else{    
        matriz[8][8] = criaMatriz(matriz,fp);
        printMatriz(matriz);
        fclose(fp);
    }

}


void exC(){
    printf("\n\nLer o arquivo letra a e armazenar os dados em uma matriz 8 x 8 armazene essa matriz em um arquivo.\n\n");

    FILE *fp,*newFile;
    float matriz[8][8];

    if((fp = fopen("arquivo.txt","r")) == NULL )
        printf("Erro de Abertura\n");
    else{
        if((newFile = fopen("matriz.txt","w")) == NULL)
            printf("Erro de Abertura\n");

        else{
            matriz[8][8] = criaMatriz(matriz,fp);
            for(int i= 0; i < 8; i++){
                for(int j= 0; j < 8; j++){
                    fprintf(newFile,"%.0f ",matriz[i][j]);
                }
                fprintf(newFile,"\n");
            }
            fclose(newFile);
        }
        fclose(fp);

    }

}
void exD(){
    printf("\n\nLer o arquivo letra ae armazenar os valores pares em um arquivo e os impares em outro arquivo.\n\n");
    
    FILE *fp,*pares,*impares;
    char buffer[128];

    
    if((fp = fopen("arquivo.txt","r")) == NULL)
        printf("Erro de Abertura\n");
    else{
        fgets(buffer,80,fp);    
        while(!feof(fp)){
            fgets(buffer,80,fp);    
            long a = atol(buffer);
            if(a % 2 == 0){
                if((pares = fopen("pares.txt","a")) == NULL)
                    printf("Erro de Abertura\n");
                else
                    fprintf(pares,"%ld\n",a);
            }
            else{
                if((impares = fopen("impares.txt","a")) == NULL)
                    printf("Erro de Abertura\n");
                else
                    fprintf(impares,"%ld\n",a);
            }
        }
        printf("Arquivo pares.txt criado com sucesso!\n");
        printf("Arquivo impares.txt criado com sucesso!\n");
        fclose(pares);
        fclose(impares);
    }
    fclose(fp);
}


void exE(){
    printf("\n\nLer o arquivo letra a e armazenar em um vetor apenas os primos, imprima esse vetor, e salve os dados desse vetor em um arquivo.\n\n");
    
    FILE * fp;
    FILE * primos;

    float numPrimo[64], numeros[64];
    int j=0, moduNum=0, cont=0;


    if ((primos = fopen("primos.txt","w"))==NULL) 
        printf("Erro de abertura!\n");
    
    if ((fp = fopen("arquivo.txt","r"))==NULL) 
        printf("Erro de abertura!\n");
     
    else {
        while (!feof(fp)) {
            fscanf(fp,"%f",&numeros[j]);
            for (int i=2; i < numeros[j]; i++) {
                moduNum=fmod(numeros[j],i);
                if (moduNum==0) {
                    numeros[j] = 0;
                }
            }
            j++;
        }
        printf("Vetor com primos: ");
        for (int i=0; i<64; i++) {
            if (numeros[i] != 0) {
                numPrimo[cont]=numeros[i];
                printf("%.0f ",numPrimo[cont]);
                fprintf(primos,"%.0f\n",numPrimo[cont]);
                cont++;
            }
        }
        printf("\n");
        printf("Arquivo primos.txt criado com sucesso!\n");
        fclose(fp);
        fclose(primos);
    }
        
}

int criaMatriz(float matriz[8][8],FILE *fp){
    char buffer[128];

    fgets(buffer,80,fp);    

    while(!feof(fp)){
        for(int i=0;i < 8;i++){
            for(int j=0; j < 8 ; j++){
                fgets(buffer,80,fp);    
                matriz[i][j] = atof(buffer);

            }
        }
    }
    return matriz;
}

void printMatriz(float matriz[8][8]){
    for(int i=0;i < 8;i++){
        for(int j=0; j < 8 ; j++){
            printf("\t%.0f ",matriz[i][j]);

        }
        printf("\n");
    }
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