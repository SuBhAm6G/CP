#include <stdio.h>

int main() {
    int a,b,year=0;
    scanf("%d %d",&a,&b);
    while(a<=b){
        year++;
        a*=3;
        b*=2;
    }
    printf("%d\n",year);
    return 0;
}
