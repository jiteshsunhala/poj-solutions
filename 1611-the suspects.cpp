#include<stdio.h>

int cnt,mark[30000];

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

int dfs(Graph *, int );
int insert(Graph *grph, int i, int j)
{
    ad=new AdjNodes;
    ad->node=j;
    ad->next=NULL;
    if(grph[i].next==NULL)
        grph[i].next=ad;
    else
    {
        adj=grph[i].next;
        while(adj->next!=NULL)
            adj=adj->next;
        adj->next=ad;
    }
    ad=new AdjNodes;
    ad->node=i;
    ad->next=NULL;
    if(grph[j].next==NULL)
        grph[j].next=ad;
    else
    {
        adj=grph[j].next;
        while(adj->next!=NULL)
            adj=adj->next;
        adj->next=ad;
    }
    return 0;
}

int main()
{
    int n,m,no,p1,p2;
    Graph *grph;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(!n)
            break;
        grph=new Graph[n];
        for(int i=0;i<n;i++)
        {
            grph[i].node=i;
            grph[i].next=NULL;
        }
        for(int i=0;i<m;i++)
        {
            scanf("%d",&no);
            if(no==1)
                scanf("%d",&p1);
            else
            {
                scanf("%d%d",&p1,&p2);
                no-=2;
                insert(grph,p1,p2);
                while(no--)
                {
                    p1=p2;
                    scanf("%d",&p2);
                    insert(grph,p1,p2);
                }
            }
        }
        cnt=0;
        for(int i=0;i<n;i++)
            mark[i]=0;
        dfs(grph,0);
        printf("%d\n",cnt);
        delete grph;
    }
    return 0;
}

int dfs(Graph *grph, int begin)
{
    mark[begin]=1;
    cnt++;
    AdjNodes *ad=grph[begin].next;
    while(ad!=NULL)
    {
        if(!mark[ad->node])
            dfs(grph, ad->node);
        ad=ad->next;
    }
    return 0;
}
