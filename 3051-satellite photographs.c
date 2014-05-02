#include<stdio.h>

int max=0,cnt;

int main()
{
    char a[1000][82],b[1000][82];
    int r, c, i, j;
    scanf("%d%d",&c,&r);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            b[i][j]='0';
    for(i=0;i<r;i++)
        scanf("%s",a[i]);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            if(a[i][j]=='*'&&b[i][j]=='0')
            {
                cnt=0;
                dfs(a,b,i,j,r,c);
                if(cnt>max)
                    max=cnt;
            }
    printf("%d",max);
    return 0;
}

int dfs(char a[1000][82], char b[1000][82], int i, int j,int r, int c)
{
    b[i][j]='1';
    cnt++;
    if(i-1>=0&&i-1<r&&j>=0&&j<c&&a[i-1][j]=='*'&&b[i-1][j]=='0')
        dfs(a,b,i-1,j,r,c);
    if(i+1>=0&&i+1<r&&j>=0&&j<c&&a[i+1][j]=='*'&&b[i+1][j]=='0')
        dfs(a,b,i+1,j,r,c);
    if(i>=0&&i<r&&j-1>=0&&j-1<c&&a[i][j-1]=='*'&&b[i][j-1]=='0')
        dfs(a,b,i,j-1,r,c);
    if(i>=0&&i<r&&j+1>=0&&j+1<c&&a[i][j+1]=='*'&&b[i][j+1]=='0')
        dfs(a,b,i,j+1,r,c);
    return 0;
}
