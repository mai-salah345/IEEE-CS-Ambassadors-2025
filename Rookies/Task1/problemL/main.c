#include <stdio.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);

    while (T--) {
        int N;
        scanf("%d", &N);

        int arr[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }


        for (int i = 0; i < N; i++) {
            int max_val = arr[i];
            for (int j = i; j < N; j++) {
                if (arr[j] > max_val) {
                    max_val = arr[j];
                }
                printf("%d ", max_val);
            }
        }

        printf("\n");
    }

    return 0;
}


