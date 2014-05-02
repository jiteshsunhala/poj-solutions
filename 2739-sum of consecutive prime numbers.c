#include<stdio.h>

int main()
{
    int j,primes[10010],n,cnt,sum,k;
    find_prime(primes,10010);
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        j=3;
        sum=2;
        cnt=0;
        while(sum<n)
        {
            if(primes[j])
                sum+=j;
            j+=2;
        }
        if(sum==n)
            cnt++;
        for(j=3;j<=n;j+=2)
        {
            if(primes[j])
            {
                sum=0;
                k=j;
                while(sum<n)
                {
                    if(primes[k])
                        sum+=k;
                    k+=2;
                }
                if(sum==n)
                    cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

int find_prime(int *primes, int size)
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
