#include <stdio.h>

int main() {
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int T=k*((w*(w+1))/2);
    if(n>=T) printf("0\n");
    else printf("%d\n",T-n);
    
    return 0;
}
