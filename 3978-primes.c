#include<stdio.h>

int main()
{
    char primes[100000];
    int cnt,a,b,i;
    find_prime(primes, 100000);
    while(1)
    {
        scanf("%d%d",&a,&b);
        if(a==-1&&b==-1)
            break;
        cnt=0;
        if(a<=2)
        {
            if(b>=2)
                cnt++;
            a=3;
        }
        if(a%2==0)
            a++;
        for(i=a;i<=b;i+=2)
            if(primes[i]-48)
                cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}

int find_prime(char primes[100000],int size)
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
