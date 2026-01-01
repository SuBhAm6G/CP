#include <stdio.h>
int min(int *a){
    int min=a[0];
    for (int i = 1; i < 4; i++)
    {
        if(a[i]<min) min=a[i];
    }
    return min;
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int score=0;
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                char a;
                scanf(" %c",&a);
                int b[]={i+1,j+1,10-i,10-j};
                if(a=='X') score+=min(b);
            }
        }
        printf("%d\n",score);
    }
    return 0;
}
