#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

int a;
float b;
char x;
bool d;

printf ("Digite um numero inteiro.\n");
scanf ("%d", &a);

printf ("Digite um numero decimal.\n");
scanf ("%f", &b);

printf ("Digite uma letra.\n");
scanf (" %c", &x);

printf ("Digite 0 ou 1.\n");
scanf ("%d", &d);

printf ("O valor inteiro eh: %d\n", a);

printf ("O valor decimal eh: %f\n", b);

printf ("A letra eh: %c\n", x);

printf ("O valor booleano eh: %d\n", d);


}
