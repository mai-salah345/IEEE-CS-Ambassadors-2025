#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char s[51], t[51];
        scanf("%s %s", s, t);

        int len_s = strlen(s);
        int len_t = strlen(t);
        int max_len = len_s > len_t ? len_s : len_t;

        for (int i = 0; i < max_len; i++) {
            if (i < len_s) putchar(s[i]);
            if (i < len_t) putchar(t[i]);
        }

        putchar('\n');
    }

    return 0;
}
