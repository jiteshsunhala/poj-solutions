#include<stdio.h>

int main()
{
    int i,t,s,c,max,day;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        max=0;
        day=0;
        for(i=1;i<=t;i++)
        {
            scanf("%d%d",&s,&c);
            if(s+c>8&&s+c>max)
            {
                max=s+c;
                day=i;
            }
        }
        printf("%d\n",day);
    }
    return 0;
}
