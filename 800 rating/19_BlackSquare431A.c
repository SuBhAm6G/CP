#include <stdio.h>
int main() {
    int a[4];
    char str[100];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%s",str);
    int i=0,cal=0;
    while(str[i]!='\0'){
        cal+=a[str[i]-'1'];
        i++;
    }
    printf("%d",cal);
    
    return 0;
}
