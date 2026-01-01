#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s",str);
    for (int i = 0; i < strlen(str); i=i+2)
    {
        for (int j = i+2; j < strlen(str); j=j+2)
        {
            if((str[i]-'0')>(str[j]-'0')){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
        
    }
    printf("%s",str);
    
    return 0;
}
