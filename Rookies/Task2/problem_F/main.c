#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char s[101];

    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%s", s);
        int len = strlen(s);
        if (len <= 10)
            printf("%s\n", s);
        else
            printf("%c%d%c\n", s[0], len - 2, s[len - 1]);
    }

    return 0;
}
