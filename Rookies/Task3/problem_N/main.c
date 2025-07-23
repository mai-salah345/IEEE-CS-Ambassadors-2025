#include <stdio.h>
#include <stdlib.h>
void shift_zeros(int x[], int y);

int main()
{
    int len;
    scanf("%d",&len);

    int arr[len];
    for(int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }

    shift_zeros(arr, len);
    return 0;
}

void shift_zeros(int x[], int y){
    int index = 0;

    for(int i = 0; i < y; i++) {
        if(x[i] != 0) {
            x[index++] = x[i];
        }
    }

    while(index < y) {
        x[index++] = 0;
    }

    for(int i = 0; i < y; i++) {
        printf("%d ", x[i]);
    }
}
