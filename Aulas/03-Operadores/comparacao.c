#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {
    int x = 10;
    int y = 20;

    // Superior operator ">"
    printf("x > y = %d\n", x > y);

    // Inferior operator "<"
    printf("x < y = %d\n", x < y);

    // Equal operator "=="
    printf("x == y = %d\n", x == y);

    // Superior and equal operator ">="
    printf("x >= y = %d\n", x >= y);

    // Inferior and equal operator "<="
    printf("x <= y = %d\n", x <= y);

    // Difference operator "!="
    printf("x != y = %d\n", x != y);

    system("PAUSE");
    return 0;
}
