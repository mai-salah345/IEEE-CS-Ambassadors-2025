#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;

    scanf("%d",&T);

    while(T--){
        int N;
        scanf("%d",&N);


        int arr[N];
        for(int i=0;i<N;i++){
            scanf("%d",&arr[i]);
        }

        int smallest_sum=arr[0]+arr[1]+1-0;
        int sum=0;


        for(int i=0;i<N;i++){

            for(int j=i+1;j<N;j++){
                sum=arr[i]+arr[j]+j-i;
                if(sum<smallest_sum)
                    smallest_sum=sum;
            }
        }

        printf("%d\n",smallest_sum);
    }




    return 0;
}
