#include<stdio.h>

int weight[351][3],mark[26],visit[26];

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

int dfs(Graph*, int);
int insert(Graph*, int, int);
int quick_sort(int, int);
int swap(int, int);

int main()
{
    Graph *grph;
    int x, y, edges, n, r, wt, sum, j;
    char c, node;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        wt = edges = sum = 0;
        grph = new Graph[n];
        for(int i=0;i<n;i++)
        {
            grph[i].node=i;
            grph[i].next=NULL;
        }
        for(int i=0;i<(n-1);i++)
        {
            scanf("%c",&c);
            while(c<65||c>90)
                scanf("%c",&c);
            scanf("%d",&r);
            node = c - 65;
            while(r--)
            {
                scanf("%c",&c);
                while(c<65||c>90)
                    scanf("%c",&c);
                scanf("%d",&weight[wt][2]);
                weight[wt][0] = node;
                weight[wt][1] = c - 65;
                wt++;
            }
        }
        quick_sort(0,wt-1);
        for(int i=0;i<n;i++)
            visit[i] = 0;
        j=0;
        while(edges < (n-1) && j < wt)
        {
            x = weight[j][0];
            y = weight[j][1];
            for(int i=0;i<n;i++)
                mark[i] = 0;
            dfs(grph, x);
            if(!mark[y])
            {
                visit[x] = 1;
                visit[y] = 1;
                sum +=weight[j][2];
                edges++;
                insert(grph, x, y);
            }
            j++;
        }
        printf("%d\n",sum);
        delete grph;
    }
    return 0;
}

int dfs(Graph *grph, int begin)
{
    mark[begin]=1;
    AdjNodes *ad=grph[begin].next;
    while(ad!=NULL)
    {
        if(!mark[ad->node])
            dfs(grph, ad->node);
        ad=ad->next;
    }
    return 0;
}

int insert(Graph *grph, int i, int j)
{
    ad = new AdjNodes;
    ad->node = j;
    ad->next = NULL;
    if(grph[i].next==NULL)
        grph[i].next = ad;
    else
    {
        adj = grph[i].next;
        while(adj->next!=NULL)
            adj = adj->next;
        adj->next = ad;
    }
    
    ad = new AdjNodes;
    ad->node = i;
    ad->next = NULL;
    if(grph[j].next==NULL)
        grph[j].next = ad;
    else
    {
        adj = grph[j].next;
        while(adj->next!=NULL)
            adj = adj->next;
        adj->next = ad;
    }
    return 0;
}

int quick_sort(int l,int h)
{
    int i,j,pivot[3];
    if(l<h)
    {
        pivot[2]=weight[l][2];
        pivot[1]=weight[l][1];
        pivot[0]=weight[l][0];
        i=l+1;
        j=l+1;
        while(i<=h)
        {
            if(weight[i][2]<pivot[2])
            {
                swap(i,j);
                j++;
            }
            i++;
        }
        weight[l][0]=weight[j-1][0];
        weight[l][1]=weight[j-1][1];
        weight[l][2]=weight[j-1][2];
        weight[j-1][2]=pivot[2];
        weight[j-1][1]=pivot[1];
        weight[j-1][0]=pivot[0];
        quick_sort(l,j-2);
        quick_sort(j,h);
    }
    return 0;
}

int swap(int l, int m)
{
    int t[3],i;
    for(i=0;i<3;i++)
        t[i]=weight[l][i];
    for(i=0;i<3;i++)
        weight[l][i]=weight[m][i];
    for(i=0;i<3;i++)
        weight[m][i]=t[i];
    return 0;
}
