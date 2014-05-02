#include<stdio.h>
#include<math.h>
#define size 500001
int main()
{
    long t,n,i,j,sum,pr,cnt,m;
    char a[size];
    a[2]=a[3]='1';
    for(i=4;i<size;i+=2)
        a[i]='0';
    for(i=5;i<size;i+=2)
        a[i]='1';
    for(i=3;i<sqrt(size);i+=2)
        if(a[i]=='1')
            for(j=i*3;j<size;j=j+i*2)
                a[j]='0';
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%ld",&n);
        if(!n)
            break;
        printf("%5d  ",n);
        if(a[n]=='1'||n==1)
            printf("DEFICIENT\n");
        else
        {
            m=n;
            cnt=0;
            pr=1;
            while(n%2==0)
            {
                cnt++;
                n/=2;
            }
            sum=(pow(2,cnt+1)-1);
            pr*=sum;
            for(i=3;i<=m/2;i+=2)
            {
                if(a[i]=='1'&&n%i==0)
                {
                    cnt=0;sum=0;
                    while(n%i==0)
                    {
                        n/=i;
                        cnt++;
                    }
                    sum=((ceil(pow(i,cnt+1)-1))/(i-1));
                    pr*=sum;
                }
            }
            pr-=m;
            if(pr>m)
                printf("ABUNDANT\n");
            else if(pr==m)
                printf("PERFECT\n");
            else
                printf("DEFICIENT\n");
        }
    }
    printf("END OF OUTPUT");
    return 0;
}
