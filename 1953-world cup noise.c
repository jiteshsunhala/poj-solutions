#include<stdio.h>

int main()
{
    int t,n,i,j;
    long long int c,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        a=2;
        b=1;
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            c=a+b;
            b=a;
            a=c;
        }
        printf("Scenario #%d:\n%lld\n\n",i+1,a);
    }
    return 0;
}
