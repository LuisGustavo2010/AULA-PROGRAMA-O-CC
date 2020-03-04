#include <stdio.h> //inclusão de biblioteca
//stdio = standard input output . Formato

// todo programa em C começa com a função N
// void = retorno nulo
// int = retorno zero
int main()
{
    int a;//suporta de -32768 até +32767
    printf("Digite um nº: ");//printf = saida /formatada
    scanf("%i",&a);//aciona entrada do teclado, entrada de dados, scanf = entrada/formatada, sem isto o PC inputa um valor qualquer
    printf("valor digitado: %i", a); //%i = argumento de formatação (i=inteiro linkado à variavel


    return 0;
}
