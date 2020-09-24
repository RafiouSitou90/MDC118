#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    int counter = 0;
    do {
        printf("%d, ", counter);
        counter++;
    } while (counter < 10);
    printf("\n");


    int counter_2 = 0;
    do {
        counter_2++;
        if (counter_2 < 5)
            continue;
        printf("%d, ", counter_2);
    } while (counter_2 < 10);
    printf("\n");


    char option = getchar();
    do {
        option = getchar();
        printf("%c", option);
    } while (option != '0');


    int i = 0;
    do {
        int j = 0;
        do {
            printf("(%d,%d) ", i, j);
            j++;
        } while (j < 10);
        i++;
    } while (i < 10);

    // Infinity loop
//    do {
//        printf("Infinity loop");
//    } while (1);

    printf("\n");


    system("PAUSE");
    return 0;
}
