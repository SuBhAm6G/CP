#include <stdio.h>

int main() {
    int n, solvable=0;
    scanf("%d",&n);
    int arr[n][3];
    for(int i=0; i<n; i++){
        scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    for(int i=0; i<n; i++){
        if((arr[i][0]+arr[i][1]+arr[i][2])>=2){
            solvable++;
        }
    }
    printf("%d", solvable);
    return 0;
}
