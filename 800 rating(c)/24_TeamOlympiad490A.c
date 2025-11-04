#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int grp1[5000],count1=0;
    int grp2[5000],count2=0;
    int grp3[5000],count3=0;
    for (int i = 1; i <=n; i++)
    {
        int student;
        scanf("%d",&student);
        if(student==1){
            grp1[count1]=i;
            count1++;
        }
        else if(student==2){
            grp2[count2]=i;
            count2++;
        }
        else{
            grp3[count3]=i;
            count3++;
        }
    }
    
    int min=(count1<count2)?((count1<count3)?count1:count3):((count2<count3)?count2:count3);
    printf("%d\n",min);
    for (int i = 0; i < min; i++)
    {
        printf("%d %d %d\n",grp1[i],grp2[i],grp3[i]);
    }
    
    
    return 0;
}
