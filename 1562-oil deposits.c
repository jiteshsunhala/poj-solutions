#include<stdio.h>

int main()
{
    char a[100][101],b[100][100];
    int i,j,cnt,r,c;
    while(1)
    {
        scanf("%d%d",&r,&c);
        if(!r&&!c)
            break;
        for(i=0;i<r;i++)
            scanf("%s",a[i]);
        cnt=0;
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                b[i][j]='0';
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                if(a[i][j]=='@'&&b[i][j]=='0')
                {
                    dfs(a,b,i,j,r,c);
                    cnt++;
                }
        printf("%d\n",cnt);
    }
    return 0;
}

int dfs(char a[100][101], char b[100][100], int i, int j, int r,int c)
{
    b[i][j]='1';
    if(i-1>=0&&i-1<r&&j-1>=0&&j-1<c&&a[i-1][j-1]=='@'&&b[i-1][j-1]=='0')
        dfs(a,b,i-1,j-1,r,c);
    if(i-1>=0&&i-1<r&&j>=0&&j<c&&a[i-1][j]=='@'&&b[i-1][j]=='0')
        dfs(a,b,i-1,j,r,c);
    if(i-1>=0&&i-1<r&&j+1>=0&&j+1<c&&a[i-1][j+1]=='@'&&b[i-1][j+1]=='0')
        dfs(a,b,i-1,j+1,r,c);
    if(i>=0&&i<r&&j-1>=0&&j-1<c&&a[i][j-1]=='@'&&b[i][j-1]=='0')
        dfs(a,b,i,j-1,r,c);
    if(i>=0&&i<r&&j+1>=0&&j+1<c&&a[i][j+1]=='@'&&b[i][j+1]=='0')
        dfs(a,b,i,j+1,r,c);
    if(i+1>=0&&i+1<r&&j-1>=0&&j-1<c&&a[i+1][j-1]=='@'&&b[i+1][j-1]=='0')
        dfs(a,b,i+1,j-1,r,c);
    if(i+1>=0&&i+1<r&&j>=0&&j<c&&a[i+1][j]=='@'&&b[i+1][j]=='0')
        dfs(a,b,i+1,j,r,c);
    if(i+1>=0&&i+1<r&&j+1>=0&&j+1<c&&a[i+1][j+1]=='@'&&b[i+1][j+1]=='0')
        dfs(a,b,i+1,j+1,r,c);
    return 0;
}
