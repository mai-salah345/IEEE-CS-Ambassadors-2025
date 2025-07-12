#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    long long sum=0;
    for(int i=0;i<N;i++){
       sum+=arr[i];
    }

    sum=fabs(sum);
    printf("%lld\n",sum);


}
