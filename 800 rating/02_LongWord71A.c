#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d", &n);
    char word[n][101];
    for(int i=0; i<n; i++){
        scanf("%s", word[i]);
    }
    for(int i=0; i<n; i++){
        int len=strlen(word[i]);
        if(len>10){
            printf("%c%d%c\n",word[i][0],len-2,word[i][len-1]);
        }
        else{
            printf("%s\n",word[i]);
        }
    }
    return 0;
}
