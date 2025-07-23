#include <stdio.h>
#include <stdlib.h>
void print(int j);

int main()
{
    int X;
    scanf("%d",&X);

    print(X);

    return 0;
}

void print(int j){
    for(int i=1;i<=j;i++){
        if(i==j){
           printf("%d",i);
        } else {
            printf("%d ",i);
        }
    }
}

