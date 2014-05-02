#include<stdio.h>

int main()
{
    unsigned long long int t,a,b,c,d;
    scanf("%llu",&t);
    while(t--)
    {
        scanf("%llu%llu%llu%llu",&a,&b,&c,&d);
        if(b-a==c-b)
            printf("%llu %llu %llu %llu %llu\n",a,b,c,d,d+b-a);
        else
            printf("%llu %llu %llu %llu %llu\n",a,b,c,d,d*b/a);
    }
    return 0;
}
