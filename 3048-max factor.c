#include<stdio.h>

int main()
{
    int n,no,max_prime_n,max_prime=1,min_no=20000,i,primes[20010];
    find_prime(primes);
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&no);
        max_prime_n=find_max_prime(primes, no);
        if(max_prime_n>max_prime)
        {
            max_prime=max_prime_n;
            min_no=no;
        }
    }
    printf("%d",min_no);
    return 0;
}

int find_max_prime(int *primes, int n)
{
    int i;
    for(i=20009;i>=3;i-=2)
        if(primes[i]==1&&n%i==0)
            return i;
    return 2;
}

int find_prime(int *primes)
{
    int i,j;
    for(i=0;i<20010;i++)
        primes[i]=1;
    for(i=4;i<20010;i+=2)
        primes[i]=0;
    for(i=3;i<=sqrt(20010);i+=2)
        if(primes[i]==1)
            for(j=i*3;j<20010;j+=(i*2))
                primes[j]=0;
    return 0;
}
