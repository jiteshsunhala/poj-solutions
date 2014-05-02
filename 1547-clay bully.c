#include<stdio.h>

int main()
{
    int avg, p[9], j, n, t, i, sum;
    char name[9][9], bully[9], victim[9];
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        for(i=0;i<n;i++)
            p[i]=1;
        sum=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&t);
                p[i]*=t;
            }
            scanf("%s",name[i]);
            sum+=p[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(p[i]<avg)
                strcpy(victim, name[i]);
            if(p[i]>avg)
                strcpy(bully, name[i]);
        }
        printf("%s took clay from %s.\n",bully, victim);
    }
    return 0;
}
