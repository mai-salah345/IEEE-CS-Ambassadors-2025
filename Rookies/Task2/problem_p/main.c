#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    int inWord = 0;  // حالة إذا كنا داخل كلمة
    int count = 0;

    while ((c = getchar()) != '\n') {
        if (isalpha(c)) {
            if (!inWord) {
                inWord = 1;
                count++;  // بداية كلمة جديدة
            }
        } else {
            inWord = 0;  // خرجنا من الكلمة
        }
    }

    printf("%d\n", count);
    return 0;
}
