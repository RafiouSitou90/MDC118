#include <stdio.h>
#include <stdlib.h>

// Declaration of global variables.

int number = 100;
char ch = 'A'; // -128 to 127
unsigned char var = 10; // 0 to 255
const int GENDER_MALE = 1; // Constant

int main (int argc, const char * argv[]) {

    printf("Number: %d\n", number);
    printf("Ch: %c\n", ch);

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

