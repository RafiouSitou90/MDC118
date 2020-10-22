#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    char ch;
    int number;
    float value;
    char name[30];

    scanf("%c", &ch); // Operator & is the reference of the variable ie the address in memory
    scanf("%d", &number);
    scanf("%i", &number);
    scanf("%f", &value);
//    scanf("%[^\n]s", name); // For the string we don't need the operator &
//    fgets(name, 30, stdin);

    printf("%c\n", ch);
    printf("%d\n", number);
    printf("%.2f\n", value);
    printf("%s\n", name);

    printf("%30s\n", name);
    printf("%-30s\n", name);

    system("PAUSE");
    return 0;
}
