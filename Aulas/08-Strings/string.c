#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[]) {

    char str[30];
    char other_str[30];

    printf("Enter the string:");
//    gets(str); // {'t', 'e', 's', 't', '\0'}
//    fgets(str, sizeof(str), stdin); // {'t', 'e', 's', 't', '\n'}
    scanf("%[^\n]s", str); // {'t', 'e', 's', 't', '\0'}

    printf("%s\n", str);

    for (int i = 0; i < strlen(str); i++) {
        printf("%c", str[i]);
    }

    printf("\n");

    for (long int i = strlen(str) - 1; i >= 0 ; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    strcpy(other_str, str); // Copy => other_str = str
    printf("strcpy(other_str, str) => %s", other_str);

    printf("\n");
    strcat(other_str, str); // Concat => other_str + str
    printf("strcpy(other_str, str) => %s\n", other_str);

    printf("\n");
//    strcmp(other_str, str); // Difference => other_str == str
    printf("strcmp(other_str, str) => %d\n", strcmp(other_str, str));

    printf("\n");
    printf("Found 1 in other_str? %s\n", strchr(other_str, '1'));
    printf("Found 0 in other_str? %s\n", strchr(other_str, '0'));
    printf("Found 123 in other_str? %s\n", strstr(other_str, "123"));
    printf("Found 456 in other_str? %s\n", strstr(other_str, "456"));

    for (int i = 0; i < 30; i++) {
        printf("%c", other_str[i]);
    }

    printf("\n");

    memset(other_str, 0, sizeof(other_str));
    strcpy(other_str, str);

    printf("\n");

    for (int i = 0; i < 30; i++) {
        printf("%c", other_str[i]);
    }

    printf("\n\n");
    system("PAUSE");

    return 0;
}
