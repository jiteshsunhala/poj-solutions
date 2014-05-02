#include<stdio.h>

int main()
{
    int j,i,n;
    char c,p[20][20];
    scanf("%d %c",&n,&c);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            p[i][j]=' ';
    for(j=0;j<n;j++)
        for(i=0;i<=j;i++)
        {
            p[i][j]=c;
            if(c=='9')
                c='1';
            else
                c++;
        }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==n-1)
                printf("%c",p[i][j]);
            else
                printf("%c ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
