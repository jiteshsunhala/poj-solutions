#include<stdio.h>

int main()
{
    unsigned long long int cas=0,n,t,i,sum;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu",&n);
        sum=0;
        for(i=1;i<=n;i++)
            sum+=(i*((i+1)*(i+2)/2));
        cas++;
        printf("%llu %llu %llu\n",cas,n,sum);
    }
    return 0;
}
