/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia 10 valores e imprima o maior e o menor valores lidos.
 */

#include <stdio.h>
#include <stdlib.h>

const int SIZE = 10;

int main(int argc, const char *argv[]) {

    int number[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Enter the number %d :", i + 1);
        scanf("%d", &number[i]);
    }

    int min = number[0], max = number[0];
    for (int i = 0; i < SIZE; i++) {
        if (min > number[i]) {
            min = number[i];
        }
        if (max < number[i]) {
            max = number[i];
        }
    }

    printf("\nThe Smallest number is %d\n", min);
    printf("The Biggest number  is %d", max);

    printf("\n\n");
    system("PAUSE");

    return 0;
}
