#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a=n/5;
    if(n%5==0)
        printf("%d\n",a);
    else
        printf("%d\n",a+1);
    return 0;
}
