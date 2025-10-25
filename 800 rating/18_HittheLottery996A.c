#include <stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int notes[]={100,20,10,5,1};
    for (int i = 0; i < (sizeof(notes)/sizeof(notes[0])); i++)
    {
        count+=n/notes[i];
        n%=notes[i];
    }
    printf("%d\n",count);
    return 0;
}
