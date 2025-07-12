#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",&N);

    int arr[N];
    int arr2[N];

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<N;i++){

        arr2[N-i-1]=arr[i];
    }

    for(int i=0;i<N;i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}
