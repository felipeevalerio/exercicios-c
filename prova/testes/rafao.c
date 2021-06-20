
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ex1();
int ex3();
int ex4();
int criamatriz(int matriz[10][10]);

int main()
{
    ex1();
    ex3();
    ex4();
    return 0;
}
int ex1()
{
    int matriz[10][10];
    printf("a - Faça uma função que receba uma matriz 10x10  e devolva essa matriz preenchida com valores compreendidos entre MIN e MAX (passados como parâmetro).\n");

    matriz[10][10] = criamatriz(matriz);
    ex02(matriz);

}

int numeroAleatorio(int min,int max){
    int aleatorio;
    aleatorio = min + (rand() %  (max - min));
    return aleatorio;
}

int criamatriz(int matriz[10][10])
{
    int nummin, nummax;
    printf("Me diga um valor minimo!\n");
    scanf("%d", &nummin);
    printf("Me diga um valor maximo!\n");
    scanf("%d", &nummax);
    for (int i = 0; i < 10; i++)
    {
        for (int p = 0; p < 10; p++)
        {
            matriz[i][p] = numeroAleatorio(nummin,nummax);
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return matriz;
}
// int ex2(int matriz[10][10])
// {
    // return 0;
    // printf("b Faça uma função que receba uma matriz 10x10  e imprima essa matriz \n");
    // for (int i = 0; i < 10; i++)
    // {
        // for (int p = 0; p < 10; p++)
        // {
            // printf("%d ", matriz[i][p]);
        // }
        // printf("\n");
    // }
    // return matriz;
// }
int ex3()
{
    return 0;
}
int ex4()
{
    return 0;
}