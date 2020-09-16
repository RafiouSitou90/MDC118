#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {
    int x = 10;
    int y = 20;
    int z;

    // Sum operator "+"
    z = x + y;
    printf("x + y = %d\n", z);

    // Subtraction operator "-"
    z = x - y;
    printf("x - y = %d\n", z);

    // Multiplication operator "*"
    z = x * y;
    printf("x * y = %d\n", z);

    // Division operator "/"
    z = x / y;
    printf("x / y = %d\n", z);

    float w = (float) x / (float) y;        // explicit conversion
    printf("x / y = %f\n", w);

    // division rest operator "%"
    z = x % y;
    printf("x %% y = %d\n", z);

    /**
     * increment operator "++"
     * x++ => x = x + 1
     */
    printf("x++ %d\n", x++);                // pos ==> use the value of x then sum x + 1
    printf("++x %d\n", ++x);                // pre ==> sum x + 1 then use the value

    /**
     * decrement operator "--"
     * x-- => x = x - 1
     */
    printf("x-- %d\n", x--);                // pos ==> use the value of x then subtract x - 1
    printf("--x %d\n", --x);                // pre ==> subtract x - 1 then use the value

    // concatenated form
    x += 10;                                // x = x + 10
    printf("x %d\n", x);
    x -= 10;                                // x = x - 10
    printf("x %d\n", x);
    x *= 10;                                // x = x * 10
    printf("x %d\n", x);
    x /= 10;                                // x = x / 10
    printf("x %d\n", x);
    x %= 10;                                // x = x % 10
    printf("x %d\n", x);

    system("PAUSE");
    return 0;
}