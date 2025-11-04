#include <stdio.h>
#include <stdlib.h>
int main() {
    char direction;
    char str[101];
    scanf("%c",&direction);
    scanf("%s",str);
    int map[128]={0};
    char keybinding[]="qwertyuiopasdfghjkl;zxcvbnm,./";
    // #ASCII Mapping
    for (int i = 0; keybinding[i]; i++)
    {
        map[(int)keybinding[i]]=i;
    }
    for (int i = 0; str[i]; i++)
    {
        char c=str[i];
        int indx=map[c];
        if(direction=='R') printf("%c",keybinding[indx - 1]);
        else printf("%c",keybinding[indx + 1]);
    }
    
    
    
    return 0;
}
