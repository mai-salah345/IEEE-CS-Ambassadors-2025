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

    int min=arr[0];
    int min_index=0;
    for(int i=0;i<N;i++){
          if(min>arr[i]){
            min=arr[i];
            min_index=i;
          }
    }

    int max=arr[0];
    int max_index=0;
    for(int i=0;i<N;i++){
          if(max<arr[i]){
            max=arr[i];
            max_index=i;
          }
    }

    int temp=arr[min_index];
    arr[min_index]=arr[max_index];
    arr[max_index]=temp;

    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
