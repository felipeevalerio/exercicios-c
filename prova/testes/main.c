/*
a) Crie uma biblioteca com seu nome.h e seu nome.c para conter o seguinte método


Construa um método para calcular e retornar o valor de H:


H = -2/1 + 5/3 - 8/5 + 11/7 - 14/9 + ...


Argumento do método: o número de termos deverá ser passado por valor .


b) Construa um programa principal que peça ao usuário o número de termos e utilizando o método criado
imprima o resultado de H.


*/

/* ARQUIVO MAIN */
#include <stdio.h>
#include <stdlib.h>
#include "felipe.h"


int main(){
int terms;
printf("Quantos termos você quer que seja apresentado?\n");
scanf("%d",&terms);
float res = felipe(terms);
printf(" = %.2f\n",res);
return 0;
}


/* ARQUIVO FELIPE.C */


/* ARQUIVO FELIPE.H*/


