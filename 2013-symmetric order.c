#include<stdio.h>

int main()
{
    char a[15][30];
    int n,i,t=0;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        t++;
        printf("SET %d\n",t);
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        for(i=0;i<n;i+=2)
            printf("%s\n",a[i]);
        if(n%2==0)
            i=n-1;
        else
            i=n-2;
        for(;i>=1;i-=2)
            printf("%s\n",a[i]);
    }
    return 0;
}
