#include<stdio.h>

int main()
{
    int sum,i,n,k,a[5001],b,rank;
    char c[4];
    scanf("%d",&n);
    for(i=1;i<=5000;i++)
        a[i]=0;
    while(n--)
    {
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%s",c);
    scanf("%d",&k);
    while(k--)
    {
        b=1;
        sum=0;
        scanf("%d",&n);
        while(sum<n)
        {
            sum+=a[b];
            b++;
        }
        printf("%d\n",b-1);
    }
    return 0;
}
