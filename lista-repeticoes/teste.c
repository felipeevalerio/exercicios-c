#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int ex1();
int ex2();
int ex3();
int ex4();
int ex5();
int ex6();

int main(){

    setlocale(LC_ALL, "portuguese");
    int ex;
    ex = >=0;
    while(ex < 0){
        printf("[1]Exercício 01\n[2]Exercício 02\n[3]Exercício 03\n[4]Exercício 04\n[5]Exercício 05\n[6]Exercício 06\n[7]Exercício 07\n");
        scanf("%d",&ex);
        switch(ex){
            case 1: 
                printf("\nexercicio 1:\n");
                ex1();
                check(ex);
                break;
        
        case 2:{
        printf("\nexercicio 2:\n");
        ex2();
        printf("\nEscolha um outro exercicio ou aperte 7 para sair: ");
        scanf("%d",&ex);
        break;
        }
        case(3):{
        printf("\nexercicio 3:\n");
         ex3();
        printf("\nEscolha um outro exercicio ou aperte 7 para sair: ");
        scanf("%d",&ex);
         break;
        }
        case(4):{
        printf("\nexercicio 4:\n");
         ex4();
        printf("\nEscolha um outro exercicio ou aperte 7 para sair: ");
        scanf("%d",&ex);
         break;
        }
        case(5):{
        printf("\nexercicio 5:\n");
         ex5();
         printf("\nEscolha um outro exercicio ou aperte 7 para sair: ");
        scanf("%d",&ex);
         break;
        }
        case(6):{
        printf("\nexercicio 6:\n");
        ex6();
        printf("\nEscolha um outro exercicio ou aperte 7 para sair: ");
        scanf("%d",&ex);
        break;
        }
        case(7):{
        printf("Você escolheu sair ... fim do processo\n");
        return 0;
            }
            
        }
      
    }
}
int ex1(){

    printf("teste");

}
int ex2(){

    printf("teste");

}
int ex3(){

    printf("teste");

}
int ex4(){

    printf("teste");

}
int ex5(){

    printf("teste");

}
int ex6(){

    printf("teste");

}


int check(int ex){
    int choice;
    printf("Você deseja ver outro exercício?\n");
    printf("[1]Sim\n[2]Não\n");
    scanf("%d",&choice);

    if(choice == 1)
        ex = 0;
    else
        ex = -1;
    
    return ex;
}