#include<stdio.h>

int main()
{
    int n,t,res,i=0;
    scanf("%d",&t);
    while(t--)
    {
        i++;
        scanf("%d",&n);
        printf("%d ",i);
        res=n/25;
        n%=25;
        printf("%d QUARTER(S), ",res);
        res=n/10;
        n%=10;
        printf("%d DIME(S), ",res);
        res=n/5;
        n%=5;
        printf("%d NICKEL(S), ",res);
        printf("%d PENNY(S)\n",n);
    }
    return 0;
}
