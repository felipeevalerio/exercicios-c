#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();
int check();

int main(){
    int ex=1,aux;
    while(ex > 0){
        printf("Digite o número do exercício para poder ver o exercício.\n");
        printf("[1] Exercício 01\n[2] Exercício 02\n[3] Exercício 03\n[4] Exercício 04\n[5] Exercício 05\n[6] Exercício 06\n[7] Exercício 07\n[8] Exercício 08\n[9] Exercício 09\n[10] Exercício 10\n");
        scanf("%d",&ex);
        switch(ex){
            case 1:
                printf("Exercício 01\n");
                ex01();
                ex = check();
                break;
            case 2:
                printf("Exercício 02\n");
                ex02();
                ex = check();
                break;
            case 3:
                printf("Exercício 03\n");
                ex03();
                ex = check();
                break;
            case 4:
                printf("Exercício 04\n");
                ex04();
                ex = check();
                break;
            case 5:
                printf("Exercício 05\n");
                ex05();
                ex = check();
                break;
            case 6:
                printf("Exercício 06\n");
                ex06();
                ex = check();
                break;
            case 7:
                printf("Exercício 07\n");
                ex07();
                ex = check();
                break;
            case 8:
                printf("Exercício 08\n");
                ex08();
                ex = check();
                break;
            case 9:
                printf("Exercício 09\n");
                ex09();
                ex = check();
                break;
            case 10:
                printf("Exercício 10\n");
                ex10();
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

int ex01(){
    printf("Exercício A\n");
    int num = 10;
    for(num; num <= 50;num++){
        printf("%d\n",num);
    }
    printf("-------------------------\n");
    printf("Exercício B\n");
    int num1,num2;
    printf("Digite um número: ");
    scanf("%d",&num1);
    printf("Digite outro número: ");
    scanf("%d",&num2);
    if(num1 > num2){
        printf("O primeiro valor deve ser menor que o segundo.\n");
        return 0;    
    }

    for(num1; num1 <= num2; num1++){
        printf("%d\n",num1);
    }

    printf("-------------------------\n");
    printf("Exercício C\n");
    int choice;
    printf("Digite um número: ");
    scanf("%d",&num1);
    printf("Digite outro número: ");
    scanf("%d",&num2);
    printf("Você deseja ver o intervalo na forma crescente ou decrescente?\n");
    printf("[1] Crescente\n[2] Decrescente\n");
    scanf("%d",&choice);
    if(choice == 1 && num1 < num2){
        for(num1; num1 <= num2; num1++)
            printf("%d\n",num1);
    }
    else if(choice == 2 && num2 > num1)
        for(num1; num1 >= num2; num1--)
            printf("%d\n",num1);

    else
        printf("Não foi possível verificar o intervalo de %d e %d\n",num1,num2);

    return 0;
}

int ex02(){
    int ang=1;
    float seno,cosen,tang,rad;
    for(ang;ang <= 90; ang++){
        rad = ang * (3.141592 / 180);
        seno = sin(rad);
        cosen = cos(rad);
        tang = tan(rad);

        printf("Ângulo => %d\n",ang);
        printf("Seno => %.4f\n",seno);
        printf("Cosseno => %.4f\n",cosen);
        printf("Tangente => %.4f\n",tang);
        printf("------------------------------------------------\n");
    }

    return 0;
}

int ex03(){
    int c;
    printf("Tabela ASCII\n");
    for(c = 0; c <= 127;c++){
        printf("%c %d\n",c,c);
    }
    return 0;
}

int ex04(){
    return 0;
}

int ex05(){
    return 0;
}

int ex06(){
    return 0;
}

int ex07(){
    return 0;
}

int ex08(){
    return 0;
}

int ex09(){
    return 0;
}

int ex10(){
    return 0;
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