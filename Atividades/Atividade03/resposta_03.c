/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que calcule o fatorial de um número inteiro.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    int number, factorial;

    printf("Enter the number :");
    scanf("%d", &number);

    printf("\nFactorial of %d:\n%d! = ", number, number);

    factorial = 1;
    for (int i = number; i >= 1; i--) {
        factorial *= i;

        if (i > 1) {
            printf("%d * ", i);
        } else {
            printf("%d", i);
        }
    }
    printf(" = %d", factorial);

    printf("\n\n");
    system("PAUSE");

    return 0;
}
