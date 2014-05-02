#include<stdio.h>
 
int main()
{
    int i,n,primes[32000],cnt;
    find_prime(primes,32000);
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        cnt=0;
        for(i=3;i<=n/2;i+=2)
        {
            if(primes[i]==1&&check_prime(primes,n-i))
                cnt++;
        }
        printf("%d\n",cnt);
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
 
int check_prime(int *primes, int n)
{
    int i;
    for(i=3;i<=sqrt(n);i+=2)
        if(primes[i]==1)
            if(n%i==0)
                return 0;
    return 1;
}
