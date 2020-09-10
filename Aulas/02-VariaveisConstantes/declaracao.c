#include <stdio.h>
#include <stdlib.h>

// Declaration of global variables.

char ch = 'A';                              // -128 to 127
unsigned char var = 10;                     // 0 to 255

int number = 100;
short int shortNumber = 100;                // -32768 to 32767 (short int number)
long int longNumber = 1000000000L;          // long int number

float decimalNumber = 0.123456;             // float number (06 decimal after the coma)
double doubleNumber = 0.123451234512345;    // double number (15 decimals after the coma)

const int GENDER_MALE = 1;                  // Constant

int main (int argc, const char * argv[]) {

    printf("Ch: %c\n", ch);
    printf("Ch: %d\n", var);
    printf("Number: %d\n", number);
    printf("Float Number: %.6f\n", decimalNumber);
    printf("Double Number: %.15f\n", doubleNumber);

    system("PAUSE");
    return 0;
}

/**
 * To compile, use :
 * (FOR CLANG compiler) ==> clang-7 declaracao.c -o declaracao.out
 * (FOR GCC compiler) ==> gcc declaracao.c -o declaracao.out
 *
 * To execute, run : ./declaracao.out
 */

