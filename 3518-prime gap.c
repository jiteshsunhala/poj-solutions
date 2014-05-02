#include<stdio.h>
#define siz 1299710
int main()
{
    char primes[1299710];
    int n,m,k;
    find_prime(primes, 1299710);
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        if(primes[n]=='1')
            printf("0\n");
        else
        {
            k=m=n;
            while(primes[m]!='1')
                m--;
            while(primes[k]!='1')
                k++;
            printf("%d\n",k-m);
        }
    }
    return 0;
}

int find_prime(char primes[siz],int size)
{
    int i,j;
    for(i=0;i<size;i++)
        primes[i]='1';
    for(i=4;i<size;i+=2)
        primes[i]='0';
    for(i=3;i<=sqrt(size);i+=2)
        if(primes[i]=='1')
            for(j=i*3;j<size;j+=(i*2))
                primes[j]='0';
    return 0;
}
