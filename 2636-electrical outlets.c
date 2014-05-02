#include<stdio.h>

int main()
{
    int n,t,a,i,sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        sum-=(n-1);
        printf("%d\n",sum);
    }
    return 0;
}
