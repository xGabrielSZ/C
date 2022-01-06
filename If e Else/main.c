#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char c;
    printf ("Digite um caracter em letra minuscula: \n");
    scanf ("%c", &c);

    if ( c >= 'a'){

        printf ("Segue a letra que voce digitou em maiuscula: > %c <\n",
                            toupper( c ) );
        /*

        Os simbolos > < são usados para indicar onde vai ser
        impressa a variavel.

        toupper(NomeDaVariavel)

        */
    }

    return 0;
}
