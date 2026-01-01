#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    int n;
    while(t--){
        scanf("%d",&n);
        int sum=0;
        for (int i = 0; i < n-1; i++)
        {
            int a;
            scanf("%d",&a);
            sum+=a;
        }
        printf("%d\n",-sum);
    }
    
    return 0;
}
