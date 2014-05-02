#include<stdio.h>

int main()
{
    int n,rem,sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum=1;
        rem=1;
        while(rem!=0)
        {
            while(rem<n)
            {
                rem*=10;
                rem++;
                sum++;
            }
            rem=rem%n;
        }
        printf("%d\n",sum);
    }
    return 0;
}
