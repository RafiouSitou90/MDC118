/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia dois números inteiros e determine qual é o menor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {
    int x1, x2;

    printf("Enter the first number:");
    scanf("%d", &x1);

    printf("Enter the second number:");
    scanf("%d", &x2);

    if (x1 < x2) {
        printf("The smaller number is %d", x1);
    } else if (x1 > x2) {
        printf("The smaller number is %d", x2);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
