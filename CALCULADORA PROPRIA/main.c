#include <stdio.h>
#include <stdlib.h>

int main()
{

    int calculo = 0, x = 0, y = 0, op = 0;
    float div = 0;

    printf( "\n\t\t===== CALCULADORA =====\n\n" );
    printf( "\t1 -> SOMA\n" );
    printf( "\t2 -> SUBTRACAO\n" );
    printf( "\t3 -> MULTIPLICACAO\n" );
    printf( "\t4 -> DIVISAO\n" );

    printf( "\n\tSelecione o numero da operacao desejada.\n\n\t" );

    scanf( "\t%d", &op );

    if ( op == 1 ){

        printf( "\tInsira os dois numeros a serem calculados:\n\t" );
        scanf( "\t%d", &x );
        printf( "\t" );
        scanf( "%d", &y );
        calculo = x + y;
        printf( "\tO valor da soma eh : %d", calculo );

    } else if( op == 2 ){

        printf( "\tInsira os dois numeros a serem calculados:\n\t" );
        scanf( "\t%d", &x );
        printf( "\t" );
        scanf( "\t%d", &y );
        calculo = x - y;
        printf( "\tO valor da subtracao eh : %d", calculo );

    } else if( op == 3 ){

        printf( "\tInsira os dois numeros a serem calculados:\n\t" );
        scanf( "\t%d", &x );
        printf( "\t" );
        scanf( "\t%d", &y );
        calculo = x * y;
        printf( "\tO valor da multiplicacao eh : %d", calculo );

    } else if( op == 4 ){

        printf( "\tInsira os dois numeros a serem calculados:\n\t" );
        scanf( "\t%d", &x );
        printf( "\t" );
        scanf( "\t%d", &y );
        div = x / y;
        printf( "\tO valor da divisao eh : %f", div );
    }

    printf( "\n" );
    system ("pause");

    return 0;
}
