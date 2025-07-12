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

    int check;
    for(int i=0;i<N;i++){
        if(arr[i]==arr[N-i-1]){
            check=1;
        }
        else{
            check=2;
            break;
        }
    }

    if(check==1)
        printf("YES");
    else if(check==2)
        printf("NO");

    return 0;
}
