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

    int low=arr[0];
    int pos=1;
    for(int i=1;i<N;i++){
        if(arr[i]<low){
            low=arr[i];
            pos=i+1;
        }
    }

    printf("%d %d",low,pos);

    return 0;
}
