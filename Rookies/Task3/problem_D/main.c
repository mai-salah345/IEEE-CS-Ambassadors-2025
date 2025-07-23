#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const char* isPrime(int j);

int main()
{
    int T,X;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&X);
        printf("%s\n",isPrime(X));

    }

    return 0;
}

const char* isPrime(int j){
    if (j <= 1) return "NO";
    if (j == 2) return "YES";

    for(int i=2; i <= sqrt(j); i++){
        if(j%i==0){
            return "NO";
        }
    }
    return "YES";
}
