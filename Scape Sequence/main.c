#include <stdio.h>
#include <stdlib.h>

int main(){

/*

   1) \n -> quebramos uma linha
   2) \t -> Dar um TAB no momento que estamos imprimindo
   3) \\ -> para imprimir uma barra invertida
   4) \" -> para imprimir uma aspa dupla
   5) \' -> para imprimir uma aspa simples
   6) \0 -> aqui finaliza o nosso texto

*/
    printf("\tEu sou o \\ \' \" Code::Block.\n\0");
    return 0;
}
