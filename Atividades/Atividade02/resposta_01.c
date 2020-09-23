/**
 * Created by Rafiou Sitou
 */


/**
 * Escrever um programa em C que determine se um número é par ou impar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    int number;

    printf("Enter the number :");
    scanf("%d", &number);
    getchar();

    if (number % 2 == 0) {
        printf("The number %d is \"par\"", number);
    } else {
        printf("The number %d is \"impar\"", number);
    }

    printf("\n\n");

    system("PAUSE");
    return 0;
}

/*
    Use of ternary condition

    number % 2 == 0
        ? printf("The number %d is \"par\"", number)
        : printf("The number %d is \"impar\"", number)
    ;
*/




