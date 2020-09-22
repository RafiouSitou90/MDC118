/**
 * Created by Rafiou Sitou
 */


/**
 * Escrever um programa em C que associe um valor quantitativo a uma nota qualitativa conforme a tabela:
 * 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom e 5 = Ótimo.
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    unsigned int value;

    printf("Enter the value :");
    scanf("%d", &value);
    getchar();

    switch (value) {
        case 1 :
            printf("Ruim");
            break;
        case 2 :
            printf("Insuficiente");
            break;
        case 3 :
            printf("Suficiente");
            break;
        case 4 :
            printf("Bom");
            break;
        case 5 :
            printf("Otimo");
            break;

        default:
            printf("No qualification attributed for the value %d.", value);
    }

    printf("\n\n");

    system("PAUSE");
    return 0;
}
