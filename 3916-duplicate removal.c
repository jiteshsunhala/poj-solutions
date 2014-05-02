#include<stdio.h>

int main()
{
    int n,p1,p2;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        p1=0;
        while(n--)
        {
            scanf("%d",&p2);
            if(p2!=p1)
            {
                printf("%d ",p2);
                p1=p2;
            }
        }
        printf("$\n");
    }
    return 0;
}
