#include <stdio.h> //inclus�o de biblioteca
//stdio = standard input output . Formato

// todo programa em C come�a com a fun��o N
// void = retorno nulo
// int = retorno zero
int main()
{
    int a;//suporta de -32768 at� +32767
    printf("Digite um n�: ");//printf = saida /formatada
    scanf("%i",&a);//aciona entrada do teclado, entrada de dados, scanf = entrada/formatada, sem isto o PC inputa um valor qualquer
    printf("valor digitado: %i", a); //%i = argumento de formata��o (i=inteiro linkado � variavel


    return 0;
}
