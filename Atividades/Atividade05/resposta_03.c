/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia até 80 caracteres e imprima na ordem invertida.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int SIZE = 80;

int main(int argc, const char *argv[]) {

    char characters[SIZE];

    printf("Enter the characters (ex: max characters = %d) :", SIZE);
    gets(characters);

    while (strlen(characters) <= 0 || SIZE < strlen(characters)) {
        printf("Max characters allowed :%d, try again\n", SIZE);
        printf("Enter the characters (ex: max characters = %d):", SIZE);
        gets(characters);
    }
    printf("\n");

    for (int i = strlen(characters) - 1; i >= 0; i--) {
        printf("%c", characters[i]);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
