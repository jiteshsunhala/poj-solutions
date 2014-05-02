#include<stdio.h>

int main()
{
    char a[100][100];
    int mark[100][100],i,k,l,j,n,m,sum=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            mark[i][j]=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            scanf("%c",&a[i][j]);
            if(a[i][j]=='\n')
                scanf("%c",&a[i][j]);
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]=='W'&&!mark[i][j])
            {
                sum++;
                dfs(a,i,j,mark);
            }
        }
    }
    printf("%d",sum);
    return 0;        
}

int dfs(char a[100][100], int i, int j, int mark[100][100])
{
    mark[i][j]=1;
    if(i-1>=0&&j-1>=0&&a[i-1][j-1]=='W'&&!mark[i-1][j-1])
        dfs(a, i-1, j-1, mark);
    if(i-1>=0&&j>=0&&a[i-1][j]=='W'&&!mark[i-1][j])
        dfs(a, i-1, j, mark);
    if(i-1>=0&&j+1>=0&&a[i-1][j+1]=='W'&&!mark[i-1][j+1])
        dfs(a, i-1, j+1, mark);
    if(i>=0&&j-1>=0&&a[i][j-1]=='W'&&!mark[i][j-1])
        dfs(a, i, j-1, mark);
    if(i>=0&&j+1>=0&&a[i][j+1]=='W'&&!mark[i][j+1])
        dfs(a, i, j+1, mark);
    if(i+1>=0&&j-1>=0&&a[i+1][j-1]=='W'&&!mark[i+1][j-1])
        dfs(a, i+1, j-1, mark);
    if(i+1>=0&&j>=0&&a[i+1][j]=='W'&&!mark[i+1][j])
        dfs(a, i+1, j, mark);
    if(i+1>=0&&j+1>=0&&a[i+1][j+1]=='W'&&!mark[i+1][j+1])
        dfs(a, i+1, j+1, mark);
    return 0;
}
