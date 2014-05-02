#include<stdio.h>

int main()
{
    int n,t,l,r;
    while(1)
    {
        scanf("%d%d",&n,&t);
        if(!n&&!t)
            break;
        n++;
        while(t--)
        {
            scanf("%d%d",&l,&r);
            if(n>=r-l+1)
                n-=(r-l+1);
            else
                n=0;
        }
        printf("%d\n",n);
    }
    return 0;
}
