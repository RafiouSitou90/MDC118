/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que imprima os meses de um ano definidos por uma enumeração.
 */

#include <stdio.h>
#include <stdlib.h>

enum months_e {
    January,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(int argc, const char *argv[]) {

    printf("\n");
    for (int i = 0; i < 12; i++) {
        if (i == January) printf("January\n");
        if (i == February) printf("February\n");
        if (i == March) printf("March\n");
        if (i == April) printf("April\n");
        if (i == May) printf("May\n");
        if (i == June) printf("June\n");
        if (i == July) printf("July\n");
        if (i == August) printf("August\n");
        if (i == September) printf("September\n");
        if (i == October) printf("October\n");
        if (i == November) printf("November\n");
        if (i == December) printf("December\n");
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
