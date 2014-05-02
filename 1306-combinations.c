#include<stdio.h>

int main()
{
    int n,m,i,j;
    unsigned long long int a[101][101];
    a[1][0]=a[1][1]=1;
    for(i=2;i<101;i++)
    {
        a[i][0]=a[i][i]=1;
        for(j=1;j<i;j++)
            a[i][j]=a[i-1][j-1]+a[i-1][j];
    }
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(!n&&!m)
            break;
        printf("%d things taken %d at a time is %llu exactly.\n",n,m,a[n][m]);
    }
    return 0;
}
