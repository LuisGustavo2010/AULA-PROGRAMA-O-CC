#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    //  1) Fa�a um programa que receba 02 numeros, calcule e mostre a subtra��o do 1� pelo 2�
    //  2) Fa�a um programa que receba 3 numeros, calcule e mostre o produto desses numeros
    //  3) Receba 2 notas. Calcule a m�dia ponderada (peso3 e peso7)

int main()
{
   int n1,n2,n3;
   int produto;

   printf("Digite o Primeiro valor: ");
   scanf("%i",&n1);
   printf("\n");
   printf("Digite o Segundo valor: ");
   scanf("%i",&n2);
   printf("\n");
   printf("Digite o Terceiro valor: ");
   scanf("%i",&n3);
   printf("\n");

   produto = n1*n2*n3;

   printf("O valor do produto dos numero eh: %i",produto);

   return 0;

}
