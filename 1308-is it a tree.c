#include<stdio.h>
#define size 101

int a[size],b[size];

int main()
{
    int u,v,i,tcase=0,cnt,tree,max;
    while(1)
    {
        scanf("%d%d",&u,&v);
        if(u==-1&&v==-1)
            break;
        tree=1;
        max=cnt=0;
        tcase++;
        for(i=0;i<size;i++)
            a[i]=i;
        for(i=0;i<size;i++)
            b[i]=0;
        while(u!=0&&v!=0)
        {
            if(u==v)
            {
                tree=0;
                break;
            }
            else
            {
                b[u]=b[v]=1;
                if(u>v&&u>max)
                    max=u;
                if(v>u&&v>max)
                    max=v;
                if(a[v]==v)
                    a[v]=u;
                else
                {
                    tree=0;
                    break;
                }
            }
            scanf("%d%d",&u,&v);
        }
        if(tree)
        {
            if(!max)
                printf("Case %d is a tree.\n",tcase);
            else
            {
                for(i=0;i<max;i++)
                    if(a[i]==i&&b[i])
                        cnt++;
                if(cnt==1)
                    printf("Case %d is a tree.\n",tcase);
                else
                    printf("Case %d is not a tree.\n",tcase);
            }
        }
        else
        {
            scanf("%d%d",&u,&v);
            while(u!=0&&v!=0)
                scanf("%d%d",&u,&v);
            printf("Case %d is not a tree.\n",tcase);
        }
    }
    return 0;
}
