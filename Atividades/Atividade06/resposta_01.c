/**
 * Created by Rafiou Sitou
 */

/**
 * Escrever um programa em C que leia uma estrutura contendo dia, mes e ano
 * e imprima a data tanto no formato BR (dd/mm/aaaa) quanto no formato US (mm/dd/aaaa).
 */

#include <stdio.h>
#include <stdlib.h>

struct date_t {
    unsigned short int day, month;
    unsigned int year;
};

int main(int argc, const char *argv[]) {

    struct date_t date;

    printf("Enter the day (Ex: 1-31) :");
    scanf("%hd", &date.day);

    while (0 >= date.day || date.day > 31) {
        printf("Invalid day, try again (1-31).\n");
        printf("Enter the day (Ex: 1-31) :");
        scanf("%hd", &date.day);
    }

    printf("\nEnter the month (Ex: 1-12) :");
    scanf("%hd", &date.month);

    while (0 >= date.month || date.month > 12) {
        printf("Invalid month, try again (1-12).\n");
        printf("Enter the month (Ex: 1-12) :");
        scanf("%hd", &date.month);
    }


    printf("\nEnter the year (year between 1900 and 2100):");
    scanf("%d", &date.year);

    while (date.year < 1900 || 2100 < date.year) {
        printf("Invalid year, try again (year between 1900 and 2100).\n");
        printf("Enter the year (year between 1900 and 2100):");
        scanf("%d", &date.year);
    }

    printf("\nDate format BR (dd/mm/aaaa): %d/%d/%d", date.day, date.month, date.year);
    printf("\nDate format US (mm/dd/aaaa): %d/%d/%d", date.month, date.day, date.year);

    printf("\n\n");
    system("PAUSE");

    return 0;
}
