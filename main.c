#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    //  1) Faça um programa que receba 02 numeros, calcule e mostre a subtração do 1º pelo 2º
    //  2) Faça um programa que receba 3 numeros, calcule e mostre o produto desses numeros
    //  3) Receba 2 notas. Calcule a média ponderada (peso3 e peso7)

int main()

{
   float nota1,nota2; //float para poder inserir valores decimais
   float mediap;

   printf("Insira a nota da P1 de 0 a 10: ");
   scanf("%f",&nota1);
   printf("Insira a nota da P2 de 0 a 10: ");
   scanf("%f",&nota2);

    //média ponderada tem duas formas de se realizar
    //1º:  (nota1*3 + nota2*7)/10 divide por 10.
    //2º:  (nota1*0.3 nota2*0.7)quando for um numero decimal, é necessário declarar a variavel como tipo FLOAT

   mediap= (nota1*0.3 + nota2*0.7);
   printf("A sua media eh: %0.1f",mediap);//%0.1 = declara quantas casas após a virgula serão apresentadas

   return 0;

}
