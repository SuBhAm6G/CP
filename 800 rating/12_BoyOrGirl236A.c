#include <stdio.h>
int main() {
    char str[101];
    scanf("%s", str);
    int distinct[26]={0};//all initialised to zero
    int i=0, count=0;
    while (str[i]!='\0')
    {
        if(distinct[str[i]-'a']==0){
            count++;
            distinct[str[i]-'a']=1;
        }
        i++;
    }
    if(count%2==0) printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!");
    
    return 0;
}
