#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    int x = 15;
    int y = 10;

    printf("%d\n", x % 2 == 0); // false
    printf("%d\n", y % 2 == 0); // true

    // Ternary operator (condition) ? (true) : (false)
    printf("%s\n", x % 2 == 0 ? "It's pair" : "It's odd");
    printf("%s\n", y % 2 == 0 ? "It's pair" : "It's odd");

    system("PAUSE");
    return 0;
}
