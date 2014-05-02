#include<stdio.h>

int main()
{
    int n,i,j,sum,cnt=0;
    scanf("%d",&n);
    for(i=n/2+1;i>=1;i--)
    {
        sum=0;
        j=i;
        while(sum<n)
        {
            sum+=j;
            j--;
        }
        if(sum==n)
            cnt++;
    }
    printf("%d",cnt+1);
    return 0;
}
