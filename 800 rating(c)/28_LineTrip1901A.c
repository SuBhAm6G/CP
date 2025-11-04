#include <stdio.h>
int max(int a[],int n){
    int m=a[0];
    for (int i = 0; i < n-1; i++)
    {
        if((a[i+1]-a[i])>m) m=(a[i+1]-a[i]);
    }
    return m;
    
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,x;
        scanf("%d %d",&n,&x);
        int a[n+1];
        a[0]=0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d",&a[i]);
        }
        int max1=max(a,n+1);
        int max2=2*(x-a[n]);
        printf("%d\n", max1>max2?max1:max2);
    }
    
    
    return 0;
}
