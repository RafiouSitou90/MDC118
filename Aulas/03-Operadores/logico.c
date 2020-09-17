#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {
    int x = 10;
    int y = 20;

    printf("x > 5 = %d\n", x > 5);
    printf("x < 10 = %d\n", x < 10);

    // x superior than 5 and y inferior than 10
    printf("x > 5 && y < 10 = %d\n", x > 5 && y < 10);

    // x superior than 5 or y inferior than 10
    printf("x > 5 || y < 10 = %d\n", x > 5 || y < 10);

    // x not superior than 5
    printf("x > 5 = %d\n", !(x > 5));

    system("PAUSE");
    return 0;
}
