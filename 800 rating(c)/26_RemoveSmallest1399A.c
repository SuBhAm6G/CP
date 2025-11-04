#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)//we're using const because qsort requires it because it doesn't modify the data
{
    return (*(int*)a- *(int*)b);
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        qsort(arr,n,sizeof(int),cmp);
        int possible=1;
        for (int i = 0; i < n-1; i++)
        {
            if(abs(arr[i]-arr[i+1])>1){
                possible=0;
                break;
            }
        }
        if(possible) printf("YES\n");
        else printf("NO\n");
    }
    
    
    return 0;
}
