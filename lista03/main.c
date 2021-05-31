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

    system("pause");
    return 0;
}

int ex01(){
    int num=0,pairs=0,odds=0;

    printf("Se desejar sair do loop, digite o número 9999\n");

    while(num < 9999){
        printf("Digite um número para entrar no conjunto e verificar quantos são ímpares e quantos são pares:");
        scanf("%d",&num);
        if(num == 9999)
            break;
        num % 2 == 0 ? pairs++ : odds ++;

    }
    printf("Pares => %d\n",pairs);
    printf("Ímpares => %d\n",odds);

    return 0;
}

int ex02(){
    int num=0,maior=0,menor=0,numbers=0;
    float media,total=0;
    printf("Se desejar sair do loop, digite o número -1\n");

    while(num >= 0){
        printf("Digite um número para entrar no conjunto e mostrar qual é o maior, o menor e a média:");
        scanf("%d",&num);
        
        if(num < 0 ) break;

        if(num > maior){
            maior = num;
        }
        else if(num < menor || menor == 0){
            menor = num;
        }
        numbers++;
        total+=num;
    }

    media = total / numbers;
    
    printf("Maior => %d\n",maior);
    printf("Menor => %d\n",menor);
    printf("Média => %.2f\n",media);


    return 0;    
}

int ex03(){
    int num,fatorial=1,printNum;
    printf("Digite um valor para ver seu fatorial:\n");
    scanf("%d",&num);
    printNum = num;
    for(num;num > 0;num--){
        fatorial = fatorial * num;
    }
    printf("O valor de %d! é %d\n",printNum,fatorial);
    return 0;
}

int ex04(){
    int terms;
    float total,denominador=3;
    printf("Digite o número de termos:");
    scanf("%d",&terms);

    for (int i=0; i < terms; i++){
        if(i % 2 == 1)
            total += 1 / pow(denominador,3);
        else
            total -= 1 / pow(denominador,3);

        denominador += 2;
    }
    
    total = 1 - total;

    printf("O valor da série dado a quantidade de termos é %.4f\n",total);

    return 0;
}

int ex05(){
    int i=3,num,fibo1=1,fibo2=1,soma;
    printf("Digite um número para ver a série de fibonnaci deste termo");
    scanf("%d",&num);

    if(num <= 2){
        printf("Digite um número maior do que 2\n");
        return 0;
    }

    printf("Fibonacci => %d\n",fibo1);
    printf("Fibonacci => %d\n",fibo2);    

    for (i; i < num; i++)
    {
        soma = fibo1 + fibo2;
        printf("Fibonacci => %d\n",soma);                    
        fibo1 = fibo2;                           
        fibo2 = soma;
    }
    
    return 0;
}

int ex06(){
    float total, denominador, terms, numerador=1;

    printf("Digite o numeros de termos.\n");
    scanf("%f", &terms);

    for (int i = 0; i < terms; i++)
    {
        if (i % 2 == 1)
        {
            total += numerador / terms;
            terms -= numerador - 1;
            numerador++;
        }
        else
        {
            total -= numerador / terms;
            terms -= numerador - 1;
            numerador++;
        }
    }
    printf("\nTotal da expressao: %.2f", total);

    
    return 0;
}

int ex07(){
    int num=10000,n1,n2,n3,n4,n5,aux;
    printf("Imprimir todos os números palíndromos entre 10000 a 99999\n");
    while(num >= 10000 & num <= 99999){
        n1 = num / 10000;
        aux = num % 10000;
        n2 = aux / 1000;       
        aux = num % 1000;       
        n3 = aux / 100;       
        aux = num % 100;  
        n4 = aux / 10;       
        n5 = num % 10;       
        if(n1 == n5 && n2 == n4){
            printf("O número %d é palíndromo.\n",num);
        }
        num++;
    }

    
    return 0;
}

int ex08(){
    int num=1000,n1,n2,n3,n4,aux,sum,result;
    printf("Imprimir todos os números de 4 dígitos que possui esta característica.\n");
    for(num; num >= 1000 && num <= 9999;num++){
        n1 = num / 1000;
        aux = num % 1000;
        n2 = aux / 100;
        aux = num % 100;
        n3 = aux / 10;
        n4 = aux % 10;

        sum = (n1 * 10 + n2) + (n3 * 10 + n4);
        result = pow(sum,2);
        if(result == num)
            printf("O número %d possui esta característica.\n",result);
    }
    return 0;
}

int ex09(){
    int choice,botChoice,wins=0,loses=0;
    printf("Cara ou coroa!\n");
    for(int i = 0; i < 10 ; i++){
        printf("[0] Cara\n[1] Coroa\n");
        scanf("%d",&choice);
        botChoice = rand() % 2;
        if(botChoice == choice){
            printf("Parabéns, você ganhou jogando %s\n",choice == 0 ? "Cara" : "Coroa");
            wins++;
        }else{
            printf("Você perdeu! Tente novamente.\n");
            loses++;
        }
    }

    printf("Vitórias => %d\n",wins);
    printf("Derrotas => %d\n",loses);

    return 0;
}

int ex10(){
    int meio,li=1,ls=1023,tentativas=0;
    char escolha;
    printf("Pense em um número entre 1 e 1023 para o programa adivinhar:\n");
    meio = (li + ls) / 2; 
    for(int i = 0; i < 10 ; i++){
        printf("Seu número é > , < ou = que %d?\n",meio);
        scanf(" %c",&escolha);
        printf("%c\n",escolha);
        if(escolha == '>')
            li = meio;
        
        else if(escolha == '<')
            ls = meio;
        
        else if (escolha == '='){
            printf("Seu número é igual a %d\n",meio);
            break;
        }
        
        meio = (li + ls) / 2;
        tentativas++;

    }
    printf("Número de tentativas => %d\n",tentativas);  
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
