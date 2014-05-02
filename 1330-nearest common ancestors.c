#include<stdio.h>

int main()
{
    int a[10001],t,n,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(k=1;k<=n;k++)
            a[k]=k;
        k=0;
        while(k<n-1)
        {
            scanf("%d%d",&i,&j);
            a[j]=i;
            k++;
        }
        scanf("%d%d",&i,&j);
        if(a[i]==j)
            printf("%d\n",j);
        else if(a[j]==i)
            printf("%d\n",i);
        else
        {
            while(1)
            {
                k=j;
                while(a[k]!=k&&a[k]!=i)
                    k=a[k];
                if(a[k]==i)
                {
                    printf("%d\n",i);
                    break;
                }
                i=a[i];
            }
        }
    }
    return 0;
}
