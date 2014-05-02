#include<stdio.h>

int main()
{
    char a[76],b[76];
    int i,cnt1,cnt2;
    while(1)
    {
        scanf("%s%s",a,b);
        if(strcmp(a,"E")==0)
            break;
        cnt1=cnt2=0;
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='R'&&b[i]=='S')
                cnt1++;
            else if(a[i]=='S'&&b[i]=='R')
                cnt2++;
            else if(a[i]=='P'&&b[i]=='R')
                cnt1++;
            else if(a[i]=='R'&&b[i]=='P')
                cnt2++;
            else if(a[i]=='S'&&b[i]=='P')
                cnt1++;
            else if(a[i]=='P'&&b[i]=='S')
                cnt2++;
        }
        printf("P1: %d\nP2: %d\n",cnt1,cnt2);
    }
    return 0;
}
