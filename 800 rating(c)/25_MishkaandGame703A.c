#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int M=0,C=0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a>b) M++;
        else if(b>a) C++;
    }
    if(M>C) printf("Mishka\n");
    else if(C>M) printf("Chris\n");
    else printf("Friendship is magic!^^\n");
    
    return 0;
}
