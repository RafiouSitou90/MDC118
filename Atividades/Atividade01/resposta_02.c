/**
 * Created by Rafiou Sitou
 */


/**
 * Escrever um programa em C que converta um número x de segundos em horas, minutos e segundos.
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {
    int x = 0;
    int hour;
    int min;
    int second;

    printf("Enter the number of seconds :");
    scanf("%d", &x);

    hour = x / 3600;
    min = (x % 3600) / 60;
    second = x % 60;

    printf("%d seconds ==> %d hour(s), %d minute(s) and %d second(s)\n\n", x, hour, min, second);

    system("PAUSE");
    return 0;
}
