/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia uma tecla e determine se ela é uma letra,
 * um dígito ou um caractere especial.
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    char keyboard;

    printf("Enter something :");
    scanf("%c", &keyboard);

    if (isalpha(keyboard)) {
        printf("Voce digitou a letra %c", keyboard);
    } else if (isdigit(keyboard)) {
        printf("Voce digitou o digito %c", keyboard);
    } else {
        printf("Voce digitou o caractere especial %c", keyboard);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
