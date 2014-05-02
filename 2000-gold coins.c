#include<stdio.h>

int main()
{
    int d,sum,m,n,r;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        m=n;
        d=sqrt(1+8*n);
        r=(-1+d)/2;
        sum=r*(r+1)*(2*r+1)/6;
        n-=(r*(r+1)/2);
        sum+=(n*(r+1));
        printf("%d %d\n",m,sum);
    }
    return 0;
}
