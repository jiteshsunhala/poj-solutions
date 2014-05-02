#include<stdio.h>

int main()
{
    char primes[1001];
    int i,n,c,cnt,k;
    find_prime(primes,1001);
    while(scanf("%d%d",&n,&c)!=EOF)
    {
        cnt=0;
        for(i=1;i<=n;i++)
            if(primes[i]-48)
                cnt++;
        printf("%d %d:",n,c);
        if(cnt%2==0)
        {
            if(cnt>c*2)
            {
                cnt-=(c*2);
                k=0;i=1;
                while(k<cnt/2)
                {
                    if(primes[i]-48)
                        k++;
                    i++;
                }
                k=0;
                while(k<c*2)
                {
                    if(primes[i]-48)
                    {
                        k++;
                        printf(" %d",i);
                    }
                    i++;    
                }
            }
            else
                for(i=1;i<=n;i++)
                    if(primes[i]-48)
                        printf(" %d",i);
        }
        else
        {
            if(cnt>(c*2)-1)
            {
                cnt-=(c*2-1);
                k=0;i=1;
                while(k<cnt/2)
                {
                    if(primes[i]-48)
                        k++;
                    i++;
                }
                k=0;
                while(k<c*2-1)
                {
                    if(primes[i]-48)
                    {
                        k++;
                        printf(" %d",i);
                    }
                    i++;    
                }
            }
            else
                for(i=1;i<=n;i++)
                    if(primes[i]-48)
                        printf(" %d",i);
        }
        printf("\n\n");
    }
    return 0;
}

int find_prime(char primes[1001],int size)
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
