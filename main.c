#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    //  1) Faça um programa que receba 02 numeros, calcule e mostre a subtração do 1º pelo 2º
    //  2) Faça um programa que receba 3 numeros, calcule e mostre o produto desses numeros
    //  3) Receba 2 notas. Calcule a média ponderada (peso3 e peso7)


int main()
{
   //exercicio1
    int n1,n2,sub;

    sub= n1 - n2;

        printf("Digite o primeiro valor: ");
        scanf("%i",&n1);
        printf("\n");
        printf("Digite o Segundo valor: ");
        scanf("%i",&n2);
        printf("\n");

        //operações é necessário inserir as perações sempre abaixo da coleta dos dados do usuário
        sub= n1 - n2;
        printf("O resultado da Subtracao eh: %i", sub);

    return 0;

}
