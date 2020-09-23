#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    for (int counter = 1; counter <= 6; counter++) {
        printf("%d, ", counter);
    }
    printf("\n");


    for (int i = 0; i < 20; i = i + 2) {
        printf("%d, ", i);
    }
    printf("\n");


    int x = 6;
    for (int i = 0; i < 6 ; i++) {
        printf("%d, ", x);
        x--;
    }
    printf("\n");


    for (int i = 6; i > 0; i--) {
        printf("%d, ", i);
    }
    printf("\n");


    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d, %d ", i, j);
        }
    }
    printf("\n");

    // Infinity loop
    for (int i = 0; i >= 0; i = i + 2) {
        printf("To infinity");
    }
    printf("\n");

    // Infinity loop
//    for (;;) {
//        printf("To infinity");
//    }
//    printf("\n");


    system("PAUSE");
    return 0;
}
