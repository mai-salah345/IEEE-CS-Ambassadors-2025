#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;
    scanf("%d %d",&A,&B);

    char s[A+B+2];
    scanf("%s",s);

    for(int i=0;i<A+B+1;i++){
        if(i==A)continue;
        if(s[i]<0 || s[i]>9){
            printf("No");
            return0;
        }
    }

    if(strlen(s)==(A+B+1)&&s[A]=='-')
        printf("Yes");
    else
        printf("No");


    return 0;
}
