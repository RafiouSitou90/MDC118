/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que liste os 10 primeiros números da série de Fibonacci
 * (o próximo é a soma dos dois anteriores).
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    int number, firstNumber, secondNumber, i;

    firstNumber = 1;
    number = 0;
    i = 0;

    printf("\n***************** OS 10 PRIMEIROS NUMEROS DA SERIE DE FIBONACCI *****************\n\n");

    while (i < 10) {
        printf("%d\t", firstNumber);
        secondNumber = firstNumber + number;
        number = firstNumber;
        firstNumber = secondNumber;
        i++;
    }

    printf("\n\n");

    system("PAUSE");

    return 0;
}
