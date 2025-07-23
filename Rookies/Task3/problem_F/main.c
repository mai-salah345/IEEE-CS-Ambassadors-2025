#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int equation(int a, int b);
int power(int base, int exp);

int main()
{
    int X,N;
    scanf("%d %d",&X,&N);
    printf("%d",equation(X,N));

    return 0;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int equation(int a, int b){
    int sum = power(a, 0) - 1;;
    if(b%2==0){
        for(int i=2; i<=b ; i=i+2){
            sum+=power(a,i);
        }
    }else{
        for(int i=2; i<b ; i=i+2){
            sum+=power(a,i);
        }
    }
    return sum;
}
