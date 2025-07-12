#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d",&N);


    long arr[N];
    for(int i=0;i<N;i++){
        scanf("%ld",&arr[i]);
    }

    long X;
    scanf("%ld",&X);

    for(int i=0;i<N;i++){
        if(arr[i]==X){
            printf("%d",i);
            return 0;
        }
    }

    printf("-1");


    return 0;
}
