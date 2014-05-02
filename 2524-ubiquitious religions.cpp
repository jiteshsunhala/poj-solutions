#include<stdio.h>
#include<iostream>
using namespace std;

class AdjNodes
{
    public:
        int node;
        AdjNodes *next;
}*adj,*ad;

class Graph
{
    public:
        int node;
        AdjNodes *next;
};

int dfs(Graph *grph, int *mark, int begin)
{
    mark[begin]=1;
    AdjNodes *ad=grph[begin].next;
    while(ad!=NULL)
    {
        if(!mark[ad->node])
            dfs(grph, mark, ad->node);
        ad=ad->next;
    }
    return 0;
}

int addEdge(Graph *grph, int i, int j)
{
    ad=new AdjNodes;
    ad->node=j;
    ad->next=grph[i].next;
    grph[i].next=ad;
    ad=new AdjNodes;
    ad->node=i;
    ad->next=grph[j].next;
    grph[j].next=ad;
    return 0;
}

int find_components(Graph *grph, int *mark, int nodes)
{
    int count=0;
    for(int i=1;i<=nodes;i++)
    {
        if(!mark[i])
        {
            count++;
            dfs(grph,mark,i);
        }
    }
    return count;
}

int main()
{
    Graph *grph;
    int *mark;
    int cnt,n,m,i,j,cs=0;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(!n&&!m)
            break;
        cs++;
        mark=new int[n+1];
        grph=new Graph[n+1];
        for(i=1;i<=n;i++)
        {
            grph[i].node=i;
            grph[i].next=NULL;
        }
        while(m--)
        {
            scanf("%d%d",&i,&j);
            addEdge(grph,i,j);
        }
        for(i=1;i<=n;i++)
            mark[i]=0;
        printf("Case %d: %d\n",cs,find_components(grph,mark,n));
    }
    return 0;
}
