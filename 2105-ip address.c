#include<stdio.h>

int main()
{
    char a[100];
    int i,p,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        p=7;n=0;
        for(i=0;i<8;i++)
        {
            n+=(pow(2,p)*(a[i]-48));
            p--;
        }
        printf("%d.",n);
        p=7;n=0;
        for(i=8;i<16;i++)
        {
            n+=(pow(2,p)*(a[i]-48));
            p--;
        }
        printf("%d.",n);
        p=7;n=0;
        for(i=16;i<24;i++)
        {
            n+=(pow(2,p)*(a[i]-48));
            p--;
        }
        printf("%d.",n);
        p=7;n=0;
        for(i=24;i<32;i++)
        {
            n+=(pow(2,p)*(a[i]-48));
            p--;
        }
        printf("%d\n",n);
    }
    return 0;
}
