#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main() {
    int N;
    scanf("%d",&N);
    int min=INT_MAX;
    for (int i = 0; i < N; i++)
    {
        int a;
        scanf("%d", &a);
        if(abs(a)<abs(min)) min=a;
    }
    printf("%d\n",abs(min));
    
    return 0;
}
