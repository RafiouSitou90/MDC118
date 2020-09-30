/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que liste todos os múltiplos de 3, entre 1 e 100.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    printf("\n***************** TODOS OS MULTIPLOS DE 3 ENTRE 1 E 100 *****************\n\n");

    for (int i = 1; i <= 100; i++ ) {
        i % 3 == 0 ? printf("%d\t", i) : printf("");
    }

    printf("\n\n");

    system("PAUSE");

    return 0;
}
