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
        if(arr[i]>0)
            arr[i]=1;
        else if(arr[i]<0)
            arr[i]=2;
    }

    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
