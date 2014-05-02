#include<stdio.h>

int main()
{
    char a[11][10],b[11][10];
    int n,i,j,mine=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);
    for(i=0;i<n;i++)
        scanf("%s",b[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            if(b[i][j]=='x'&&a[i][j]!='*')
                check(a,i,j,n);
            else if(b[i][j]=='x'&&a[i][j]=='*')
                mine=1;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(mine)
            {
                if(a[i][j]=='*')
                    printf("*");
                else if(b[i][j]=='x')
                    printf("%c",a[i][j]);
                else
                    printf(".");
            }
            else
            {
                if(b[i][j]=='x')
                    printf("%c",a[i][j]);
                else
                    printf(".");
            }
        }
        printf("\n");
    }
    return 0;
}

int check(char a[11][10], int i, int j,int n)
{
    int cnt=0;
    if(i-1>=0&&i-1<n&&j-1>=0&&j-1<n&&a[i-1][j-1]=='*')
        cnt++;
    if(i-1>=0&&i-1<n&&j>=0&&j<n&&a[i-1][j]=='*')
        cnt++;
    if(i-1>=0&&i-1<n&&j+1>=0&&j+1<n&&a[i-1][j+1]=='*')
        cnt++;
    if(i>=0&&i<n&&j-1>=0&&j-1<n&&a[i][j-1]=='*')
        cnt++;
    if(i>=0&&i<n&&j+1>=0&&j+1<n&&a[i][j+1]=='*')
        cnt++;
    if(i+1>=0&&i+1<n&&j-1>=0&&j-1<n&&a[i+1][j-1]=='*')
        cnt++;
    if(i+1>=0&&i+1<n&&j>=0&&j<n&&a[i+1][j]=='*')
        cnt++;
    if(i+1>=0&&i+1<n&&j+1>=0&&j+1<n&&a[i+1][j+1]=='*')
        cnt++;
    a[i][j]=cnt+48;
    return 0;
}
