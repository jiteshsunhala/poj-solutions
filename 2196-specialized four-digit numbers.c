#include<stdio.h>

int main()
{
    int m,n=2992,sum,h,d;
    while(n<=9999)
    {
        sum=h=d=0;
        m=n;
        while(n)
        {
            sum+=(n%10);
            n/=10;
        }
        h=sum_other(m,16);
        d=sum_other(m,12);
        n=m;
        n++;
        if(sum==h&&h==d)
            printf("%d\n",m);
    }
    return 0;
}

int sum_other(int m,int b)
{
    int sum=0;
    while(m)
    {
        sum+=(m%b);
        m/=b;
    }
    return sum;
}
