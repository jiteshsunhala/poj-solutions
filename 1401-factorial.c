#include<stdio.h>
int main()
{
    long num,t,r;
    scanf("%ld",&t);
    while(t--)
    {
        r=0;
        scanf("%ld",&num);
        while(num)
        {
            num/=5;
            r+=num;
        }   
        printf("%ld\n",r);
    }
    return 0;
}
