#include <stdio.h>
#include <stdlib.h>
int main() {
    char str[101];
    scanf("%s",str);
    int steps=0;
    char curr='a';
    for(int i=0; str[i]!='\0'; i++){
        int diff=abs(str[i]-curr);
        diff=(diff>13)?(26-diff):diff;
        steps+=diff;
        curr=str[i];
    }    
    printf("%d",steps);
    return 0;
}
