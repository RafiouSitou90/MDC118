#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[]) {

    char ch = getc(stdin); // Standard input ie the keyboard
    putc(ch, stdout); // Standard output ie the screen

    getchar();

    ch = getchar(); // Equals getc(stdin)
    putchar(ch); // Equals putc(ch, stdout)

    system("PAUSE");
    return 0;
}
