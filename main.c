#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    //  1) Fa�a um programa que receba 02 numeros, calcule e mostre a subtra��o do 1� pelo 2�
    //  2) Fa�a um programa que receba 3 numeros, calcule e mostre o produto desses numeros
    //  3) Receba 2 notas. Calcule a m�dia ponderada (peso3 e peso7)


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

        //opera��es � necess�rio inserir as pera��es sempre abaixo da coleta dos dados do usu�rio
        sub= n1 - n2;
        printf("O resultado da Subtracao eh: %i", sub);

    return 0;

}
