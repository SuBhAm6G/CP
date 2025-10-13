#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    int i=0,count=0;
    while(str[i+1]!='\0'){
        if(str[i]==str[i+1]) count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
