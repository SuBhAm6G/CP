#include <stdio.h>
#include <limits.h>
int main() {
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int a;
        int count=INT_MIN;
        int new_count=0;
        for (int i = 0; i < n; i++){
            scanf("%d",&a);
            if(a==0) new_count++;
            else new_count=0;
            if(new_count>count) count=new_count;
        }
        printf("%d\n",count);
    }
    
    return 0;
}
