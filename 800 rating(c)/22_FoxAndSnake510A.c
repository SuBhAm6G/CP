#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int flag=1;
    for (int i = 1; i <= n; i++)
    {
        if(i%2){
            for (int j = 0; j < m; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else{
            if(flag==0){
                printf("#");
            }
            for (int j = 0; j < m-1; j++)
            {
                printf(".");
            }
            if(flag==1){
                printf("#");
            }
            flag=(flag==0)?1:0;
            printf("\n");
        }
    }
    return 0;
}
