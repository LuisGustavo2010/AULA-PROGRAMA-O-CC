#include <stdio.h>
#include <math.h>

int main()
{
    //Declaração das variaveis
    int resto;
    int a, b, soma, produto;
    int potencia;

    //Impressão, input e scan dos dados
    printf("Digite o Valor 1: ");
    scanf("%i",&a);
    printf("Digite o valor 2: ");
    scanf("%i",&b);

    //operações
    soma=a+b;
    produto= a*b;
    potencia=pow(a,b);
    resto=a%b; //% = o resto de uma divisão

    //Exibindo resultados //pular linha = barra invertida + n
    printf("O valor da soma entre A e B eh: %i ",soma);
    printf("\n");
    printf("O valor do produto entre A e B eh: %i ", produto);
    printf("\n");
    printf("O valor da potencia do valor A e B eh: %i", potencia);
    printf("\n");
    printf("O valor do resto do valor de A e B eh: %i", resto);
    printf("OBRIGADO!");
    printf("\n");
    return 0;
}
