#include <stdio.h>
#include <stdlib.h>

const int SIZE = 10;

int main(int argc, const char *argv[]) {

    int number[10];
    int tab[] = {10, 15, 20}; // initialization

    number[3] = 55;
    number[7] = number[3] + 10;

    for (int i = 0; i < SIZE; i++) {
        printf("%d, ", number[i]);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
