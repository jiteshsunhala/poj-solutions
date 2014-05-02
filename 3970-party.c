#include<stdio.h>
#define max 1000000

unsigned long long int hcf;

int gcd(unsigned long long int m, unsigned long long int n)
{
    if(n%m==0)
        hcf=m;
    else
        gcd(n%m,m);
    return 0;
}

int main()
{
    unsigned long long int lcm,m,n,t;
    while(1)
    {
        scanf("%lld",&t);
        if(!t)
            break;
        scanf("%lld",&n);
        if(t==1)
        {
            lcm=n;
            hcf=1;
        }
        else
        {
            hcf=n;
            lcm=n;
            t--;
            while(t--)
            {
                scanf("%lld",&n);
                m=hcf;
                gcd(hcf,n);
                lcm=m*n/hcf;
                hcf=lcm;
            }
        }
        if(lcm>=max)
            printf("Too much money to pay!\n");
        else
            printf("The CEO must bring %lld pounds.\n",lcm);
    }
    return 0;
}
