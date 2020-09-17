#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    int x = 15;
    int note = 10;

    if (x > 10) {
        printf("%s\n", "The condition is true");
    }

    if (x > 20) {
        printf("%s\n", "The condition is true");
    } else {
        printf("%s\n", "The condition is false");
    }


    if (note >= 5) {
        printf("%s\n", "The condition is true");
    } else if (note >= 1) {
        printf("%s\n", "The condition is true");
    } else if (note < 0) {
        printf("%s\n", "The condition is false");
    }



    system("PAUSE");
    return 0;
}
