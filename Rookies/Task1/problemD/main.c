#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",&N);
    if(N>=2&&N<=1000);
    else
        scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }


    for(int i=0;i<N;i++){
        if(arr[i]<=10)
            printf("A[%d] = %d\n",i,arr[i]);
    }


    return 0;
}
