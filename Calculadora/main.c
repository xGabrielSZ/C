#include <stdio.h>
#include <stdlib.h>

void main(){

    int n1, n2, n3, n4, x, y;

    printf ("Calculadora 1.0\n\n");
    printf ("Digite dois valores para serem processados.\n");
    scanf ("%d", &x);
    scanf ("%d", &y);

    n1 = x + y;
    n2 = x - y;
    n3 = x * y;
    n4 = x / y;

    printf ("\nA soma eh: %d.", n1);
    printf ("\nA subtracao eh: %d", n2);
    printf ("\nA multiplicacao eh: %d", n3);
    printf ("\nA divisao eh: %d\n", n4);

}
