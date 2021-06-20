#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void exA();
void exB();
void exC();
void exD();
void exE();

void fibonacci(FILE *);
int criaMatriz(int [8][8],FILE *);
void printMatriz(int [8][8]);

int check();

int main(){
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

    int i=3,num,fibo1=1,fibo2=1,soma=0;
    fprintf(fp,"%d\n",fibo1);
    fprintf(fp,"%d\n",fibo2);    

    for (i; i <= 64; i++) { 
        soma = fibo1 + fibo2;
        fprintf(fp,"%d\n",soma);                    
        fibo1 = fibo2;                           
        fibo2 = soma;
    }
}

void exB(){
    printf("\n\nLer o arquivo letra a e armazenar os dados em uma matriz 8 x 8 imprima essa matriz na tela\n\n");

    FILE *fp;
    int matriz[8][8];

    if((fp = fopen("arquivo.txt","r")) == NULL )
        printf("Erro de Abertura\n");

    else{    
        matriz[8][8] = criaMatriz(matriz,fp);
        printMatriz(matriz);
        fclose(fp);
    }

}

int criaMatriz(int matriz[8][8],FILE *fp){
    char buffer[128];

    fgets(buffer,80,fp);    

    while(!feof(fp)){
        for(int i=0;i < 8;i++){
            for(int j=0; j < 8 ; j++){
                fgets(buffer,80,fp);    
                matriz[i][j] = atoi(buffer);

            }
        }
    }
    return matriz;
}

void printMatriz(int matriz[8][8]){
    for(int i=0;i < 8;i++){
        for(int j=0; j < 8 ; j++){
            printf("\t%d ",matriz[i][j]);

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


void exC(){
    printf("\n\nLer o arquivo letra a e armazenar os dados em uma matriz 8 x 8 armazene essa matriz em um arquivo.\n\n");

    FILE *fp,*newFile;
    int matriz[8][8];

    if((fp = fopen("arquivo.txt","r")) == NULL )
        printf("Erro de Abertura\n");
    else{
        if((newFile = fopen("matriz.txt","w")) == NULL)
            printf("Erro de Abertura\n");

        else{
            matriz[8][8] = criaMatriz(matriz,fp);
            for(int i= 0; i < 8; i++){
                for(int j= 0; j < 8; j++){
                    fprintf(newFile,"%d ",matriz[i][j]);
                }
                fprintf(newFile,"\n");
            }
            fclose(newFile);
        }
        fclose(fp);

    }

}
void exD(){

}
void exE(){

}
