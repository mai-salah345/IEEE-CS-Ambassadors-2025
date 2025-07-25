#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000000];
    fgets(s, sizeof(s), stdin);

    char words[10000][100];
    int row = 0, col = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            words[row][col++] = s[i];
        } else if(col>0) {
            words[row][col] = '\0';
            row++;
            col = 0;
        }
    }

    if (col > 0) { //عشان اخر كلمه ملهاش قافله دا اللى بيجيب رن تايم ايرور
        words[row][col] = '\0';
        row++;
    }

    for (int i = 0; i < row; i++) {
        int len = strlen(words[i]);
        for (int j = len - 1; j >= 0; j--) {
            printf("%c", words[i][j]);
        }
        if (i != row - 1)
            printf(" ");
    }

    return 0;
}

