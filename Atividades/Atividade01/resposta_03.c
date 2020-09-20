/**
 * Created by Rafiou Sitou
 */


/**
 * Escrever um programa em C que converta um valor em Gigabytes em bytes (1Gb = 1024^3 bytes).
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (int argc, const char * argv[]) {
    const double ONE_GIGA_BYTE = pow(1024, 3);

    unsigned int value = 0;
    double result;

    printf("Enter the number of Gigabytes :");
    scanf("%d", &value);

    result = value * ONE_GIGA_BYTE;

    printf("%dGb ==> %.0f bytes\n\n", value, result);

    system("PAUSE");
    return 0;
}
