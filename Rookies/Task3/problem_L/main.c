#include <stdio.h>
#include <stdlib.h>
 void C(int x[], int y[], int l);

int main()
{
    int len;
    scanf("%d",&len);

    int A[len];
    for(int i=0; i<len; i++){
        scanf("%d",&A[i]);
    }

    int B[len];
    for(int i=0; i<len; i++){
        scanf("%d",&B[i]);
    }

    C(A,B,len);
    return 0;
}
 void C(int x[], int y[], int l){
     int c[l*2];
     for(int i=0; i<l*2; i++){
        if(i<l){
            c[i]=y[i];
        }
        else{
            c[i]=x[i-l];
        }
     }

     for(int i=0; i<l*2; i++){
        printf("%d ",c[i]);
     }


 }
