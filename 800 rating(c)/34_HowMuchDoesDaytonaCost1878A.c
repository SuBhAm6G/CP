#include <stdio.h>
#include <stdlib.h>
int main() {
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        int value;
        int flag=0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d",&value);
            if(value==k) flag=1;
        }
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    
    return 0;
}
