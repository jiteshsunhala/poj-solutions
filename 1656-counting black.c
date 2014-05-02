#include<stdio.h>

int main()
{
    int j,i,a[100][100],n,x,y,L,cnt;
    char str[10];
    for(i=0;i<100;i++)
        for(j=0;j<100;j++)
            a[i][j]=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%d%d%d",str,&x,&y,&L);
        if(strcmp(str,"BLACK")==0)
        {
            for(i=x-1;i<=x+L-2;i++)
                for(j=y-1;j<=y+L-2;j++)
                    a[i][j]=1;
        }
        else if(strcmp(str,"WHITE")==0)
        {
            for(i=x-1;i<=x+L-2;i++)
                for(j=y-1;j<=y+L-2;j++)
                    a[i][j]=0;
        }
        else
        {
            cnt=0;
            for(i=x-1;i<=x+L-2;i++)
                for(j=y-1;j<=y+L-2;j++)
                    if(a[i][j])
                        cnt++;
            printf("%d\n",cnt);
        }
    }
    return 0;
}
