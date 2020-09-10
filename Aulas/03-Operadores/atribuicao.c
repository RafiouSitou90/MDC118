#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    int x = 10;                      // Assignment (Atribuiçao x = 10)
    int y;

    printf("x = %d\n", x);

    y = x;
    x = 20;
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    system("PAUSE");
    return 0;
}