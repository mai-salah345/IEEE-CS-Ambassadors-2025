#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1001];
    scanf("%s",&s);


    for(int i=0; i<strlen(s); i++){
        if(s[i]!=s[strlen(s)-i-1]){
            printf("NO");
            return 0;
        }
    }

    printf("YES");

    return 0;
}
