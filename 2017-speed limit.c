#include<stdio.h>

int main()
{
    long long int d,n,total,s,t;
    while(1)
    {
        scanf("%lld",&n);
        if(n==-1)
            break;
        total=d=0;
        while(n--)
        {
            scanf("%lld%lld",&s,&t);
            t=t-total;
            d+=(s*t);
            total+=t;
        }
        printf("%lld miles\n",d);
    }
    return 0;
}
