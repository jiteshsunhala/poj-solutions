#include<stdio.h>

int main()
{
    int m,mod,t,n,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        m=n;
        p=1;
        while(n>10)
        {
            mod = n%10;
            if(mod>=5)
            {
                n/=10;
                n++;
            }
            else
                n/=10;
            m=n*ceil(pow(10,p));
            p++;
        }
        printf("%d\n",m);
    }
    return 0;
}
