#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {
        if (c == ',')
            putchar(' ');
        else if (isupper(c))
            putchar(tolower(c));
        else if (islower(c))
            putchar(toupper(c));
        else
            putchar(c);
    }
    return 0;
}
