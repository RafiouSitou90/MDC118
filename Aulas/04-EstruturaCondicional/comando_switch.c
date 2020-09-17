#include <stdio.h>
#include <stdlib.h>

int main (int argc, const char * argv[]) {

    int var = 20;

    switch (var) {
        case 10 :
            printf("var = %d\n", 10);
            break;

        case 5 :
            printf("var = %d\n", 5);
            break;

        case 2 :
            printf("var = %d\n", 2);
            break;

        default:
            printf("%s\n", "Variable not found.");
            break;
    }

    system("PAUSE");
    return 0;
}
