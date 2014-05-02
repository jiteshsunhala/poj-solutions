#include<stdio.h>
 
int main()
{
    int s,d,x,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&s,&d);
        if((s+d)%2==0)
        {
            x=(s+d)/2;
            if(s-x>=0)
            {
                if(x<s-x)
                    x=s-x;
                printf("%d %d\n",x,s-x);
            }
            else
                printf("impossible\n");
        }
        else
            printf("impossible\n");
    }
    return 0;
}
