#include<stdio.h>

int main()
{
    int n=1;
    while(n<=10000)
    {
        if(check(n))
        {
            printf("%d\n",n);
            n+=11;
        }
        else
        {
            n-=9;
            if(!check(n))
                n+=13;
            else
            {
                printf("%d\n",n);
                n+=11;
            }
        }
    }
    return 0;
}

int check(int n)
{
    int sum,i,j;
    for(i=1;i<n;i++)
    {
        sum=0;
        j=i;
        while(j)
        {
            sum+=(j%10);
            j/=10;
        }
        if(sum+i==n)
            return 0;
    }
    return 1;
}
