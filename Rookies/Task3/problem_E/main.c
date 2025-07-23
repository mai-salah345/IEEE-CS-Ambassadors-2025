#include <stdio.h>
#include <stdlib.h>
void swap(int i, int j);

int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);

    swap(X,Y);
    return 0;
}

void swap(int i, int j){
    printf("%d %d",j,i);
}
