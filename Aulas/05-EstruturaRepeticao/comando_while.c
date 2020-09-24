#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    int counter = 0;
    while (counter < 10) {
        printf("%d, ", counter);
        counter++;
    }
    printf("\n");

    char option = getchar(); // read keyboard
    while (option != '0') {
        printf("%c\n", option);
        option = getchar();
    }

    int i = 0;
    while (i < 10) {
        int j = 0;
        while (j < 10) {
            printf("(%d;%d) ", i, j);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n");


    // Infinity loop
//    while (1) {
//        printf("Infinity loop");
//    }

    while (1) {
        printf("Infinity loop");

        char ch = getchar();
        if (ch == 'a') break;
    }

    system("PAUSE");
    return 0;
}
