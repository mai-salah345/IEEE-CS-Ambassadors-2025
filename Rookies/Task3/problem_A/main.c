#include <stdio.h>
#include <stdlib.h>
int sum(int i,int j);

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);

    printf("%d",sum(X,Y));


    return 0;
}

int sum(int i,int j){
        return i+j;
}
