#include<stdio.h>
 
int main()
{
    long long i=1,t, n, m;
    scanf("%lld",&t);
    while(i<=t)
    {
        scanf("%lld%lld",&n,&m);
        printf("Scenario #%d:\n",i);
        if(n>=0&&m>=0)
            printf("%lld\n",(m*(m+1)/2)-((n-1)*n/2));
        else if(n<0&&m<0)
        {
            n*=-1;
            m*=-1;
            printf("-%lld\n",(n*(n+1)/2)-((m-1)*m/2));
        }
        else
        {
            n*=-1;
            printf("%lld\n",(m*(m+1)/2)-(n*(n+1)/2));
        }
        i++;
        printf("\n");
    }
    return 0;
}
