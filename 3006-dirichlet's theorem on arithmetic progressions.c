#include<stdio.h>

int main()
{
    int a,d,n,i,tmp,primes[32000];
    find_prime(primes,32000);
    while(1)
    {
        scanf("%d%d%d",&a,&d,&n);
        if(!a&&!d&&!n)
            break;
        i=0;
        while(i<n)
        {
            if(a==2)
                i++;
            else if(a%2==1&&a!=1)
            {
                tmp=check_prime(primes,a);
                if(tmp)
                    i++;
            }
            a=a+d;
        }
        printf("%d\n",a-d);
    }
    return 0;
}

int find_prime(int *primes,int size)
{
    int i,j;
    for(i=0;i<size;i++)
        primes[i]=1;
    for(i=4;i<size;i+=2)
        primes[i]=0;
    for(i=3;i<=sqrt(size);i+=2)
        if(primes[i]==1)
            for(j=i*3;j<size;j+=(i*2))
                primes[j]=0;
    return 0;
}

int check_prime(int *primes,int n)
{
    int i;
    if(n<32000&&primes[n])
        return 1;
    else
        for(i=3;i<=sqrt(n);i+=2)
            if(primes[i]&&n%i==0)
                return 0;
    return 1;
}
