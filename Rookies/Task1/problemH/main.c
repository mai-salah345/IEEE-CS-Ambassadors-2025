#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d",&N);

    int arr[N];
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }



    for(int i=0;i<N-1;i++){
        int min_index=i;

        for(int j=i+1;j<N;j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }


    for (int i = 0; i < N; i++) {
        if (i > 0) printf(" ");
        printf("%d", arr[i]);
    }

    printf("\n");


    return 0;
}
