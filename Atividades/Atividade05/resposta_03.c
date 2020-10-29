/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia até 80 caracteres e imprima na ordem invertida.
 */

#include <stdio.h>
#include <stdlib.h>

const int SIZE = 80;

int main(int argc, const char *argv[]) {

    char character[SIZE];

    for (int i = 0; i < SIZE; i++) {
        printf("Enter the character %d :", i + 1);
        scanf("%c", &character[i]);
        getchar();
    }

    printf("\n");
    for (int i = SIZE; i > 0; i--) {
        printf("Character %d : %c\n", i, character[i - 1]);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
