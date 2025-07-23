#include <stdio.h>
#include <stdlib.h>
void min_max(int x[], int y);

int main()
{
    int len;
    scanf("%d",&len);

    int arr[len];
    for(int i=0; i<len; i++){
        scanf("%d",&arr[i]);
    }

    min_max(arr, len);
    return 0;
}

void min_max(int x[], int y){
    int max=x[0];
    int min=x[0];
    for(int  i=0; i<y; i++){
        if(x[i]>max)
            max=x[i];
        if(x[i]<min)
            min=x[i];
    }
    printf("%d %d",min,max);
}
