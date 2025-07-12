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

    int min=arr[1];
    for(int i=0;i<N;i++){
        if(arr[i]<min)
            min=arr[i];
    }

    int frequency=0;
    for(int i=0;i<N;i++){
        if(min==arr[i])
            frequency++;
        }

    if(frequency%2!=0)
        printf("Lucky");
    else
        printf("Unlucky");

    return 0;
}
