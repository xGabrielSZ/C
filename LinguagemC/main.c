
#include <stdio.h>
#include <stdlib.h>

//  SOMA

int main () {

    int n1, n2;

    n1 = 10;
    n2 = 15;

    printf ("Os numeros usados sao: %d e %d\n\n", n1, n2);

    //SOMA
    int soma = n1 + n2;
    printf ("Essa eh a SOMA: %d", soma);
    //SUBTRA��O
    int subtracao = n2 - n1;
    printf ("\nEssa eh a subtracao: %d\n", subtracao);
    //MULTIPLICA��O
    int mult = n1 * n2;
    printf ("Essa eh a multiplicacao: %d\n", mult);
    //DIVIS�O
    int divisao = n2 / n1;
    printf ("Essa eh a divisao: %d\n", divisao);

    return 0;
}
