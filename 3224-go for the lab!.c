#include<stdio.h>

int main()
{
    int i,j,max,n,p[100][100],res[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&p[i][j]);
    for(i=0;i<n;i++)
        res[i]=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(p[i][j]==3)
                res[i]++;
    max=res[0];
    j=0;
    for(i=1;i<n;i++)
        if(max<res[i])
        {
            max=res[i];
            j=i;
        }
    printf("%d",j+1);
    return 0;
}
