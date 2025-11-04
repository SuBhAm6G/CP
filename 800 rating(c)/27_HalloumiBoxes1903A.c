#include <stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n,k;
        int sorted=1;
        scanf("%d %d",&n,&k);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&a[i]);
        }
        if(k==1){
            for (int i = 0; i < n-1; i++)
            {
                if(a[i]>a[i+1]) sorted=0;
            }
        }
        if(sorted) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
