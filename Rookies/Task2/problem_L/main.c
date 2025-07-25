#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 2005

char s[MAX];

void pop_back() {
    int len = strlen(s);
    if (len > 0)
        s[len - 1] = '\0';
}

void push_back(char x) {
    int len = strlen(s);
    s[len] = x;
    s[len + 1] = '\0';
}

void front() {
    printf("%c\n", s[0]);
}

void back() {
    int len = strlen(s);
    printf("%c\n", s[len - 1]);
}

void print_pos(int pos) {
    printf("%c\n", s[pos - 1]);
}

void substr(int l, int r) {
    for (int i = l - 1; i <= r - 1; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}

void sort_sub(int l, int r) {
    l--; r--;
    for (int i = l; i <= r; i++) {
        for (int j = i + 1; j <= r; j++) {
            if (s[i] > s[j]) {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
}

void reverse_sub(int l, int r) {
    l--; r--;
    while (l < r) {
        char tmp = s[l];
        s[l] = s[r];
        s[r] = tmp;
        l++; r--;
    }
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);
    scanf("%s", s);
    char op[20];

    for (int i = 0; i < q; i++) {
        scanf("%s", op);

        if (strcmp(op, "pop_back") == 0) {
            pop_back();
        } else if (strcmp(op, "front") == 0) {
            front();
        } else if (strcmp(op, "back") == 0) {
            back();
        } else if (strcmp(op, "push_back") == 0) {
            char x;
            scanf(" %c", &x);
            push_back(x);
        } else if (strcmp(op, "print") == 0) {
            int pos;
            scanf("%d", &pos);
            print_pos(pos);
        } else if (strcmp(op, "substr") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            substr(l, r);
        } else if (strcmp(op, "sort") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            sort_sub(l, r);
        } else if (strcmp(op, "reverse") == 0) {
            int l, r;
            scanf("%d %d", &l, &r);
            reverse_sub(l, r);
        }
    }

    return 0;
}
