#include<stdio.h>

int main()
{
    char a[10],b[]="937";
    int n,t,i,j,l,no;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",a);
        l=n=0;
        for(j=strlen(a)-1;j>=0;j--)
        {
            if(a[j]!='?')
                n+=((a[j]-48)*(b[l]-48));
            else
                no=b[l]-48;
            l=(l+1)%3;
        }
        l=0;
        while(n%10!=0)
        {
            n+=no;
            l++;
        }
        printf("Scenario #%d:\n",i+1);
        for(j=0;j<strlen(a);j++)
        {
            if(a[j]=='?')
                printf("%d",l);
            else
                printf("%c",a[j]);
        }
        printf("\n\n");
    }
    return 0;
}
