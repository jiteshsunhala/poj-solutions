#include<stdio.h>

int main()
{
    unsigned long long int total,cig,min_but,rem_but;
    while(scanf("%llu%llu",&cig,&min_but)!=EOF)
    {
        total=cig;
        rem_but=cig;
        while(rem_but>=min_but)
        {
            cig=rem_but/min_but;
            total+=cig;
            rem_but=rem_but%min_but+cig;
        }
        printf("%llu\n",total);
    }
    return 0;
}
