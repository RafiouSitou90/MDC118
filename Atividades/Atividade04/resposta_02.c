/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia um ano e verifique se ele é bissexto
 * (é multiplo de 4 e não é multiplo de 100, ou é múltiplo de 400).
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, const char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    int year;

    printf("Enter the Year :");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("%d é bissexto", year);
            } else {
                printf("%d nao é bissexto", year);
            }
        } else {
            printf("%d é bissexto", year);
        }
    } else {
        printf("%d nao é bissexto", year);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
