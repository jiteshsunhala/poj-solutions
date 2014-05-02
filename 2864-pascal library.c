#include<stdio.h>

int main()
{
    int n,d,i,visit[100],j,k;
    while(1)
    {
        scanf("%d%d",&n,&d);
        if(!n&&!d)
            break;
        for(i=0;i<n;i++)
            visit[i]=0;
        for(k=0;k<d;k++)
        {
            for(i=0;i<n;i++)
            {
                scanf("%d",&j);
                visit[i]+=j;
            }
        }
        for(i=0;i<n&&visit[i]!=d;i++);
        if(visit[i]==d)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
