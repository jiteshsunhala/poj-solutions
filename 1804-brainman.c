#include<stdio.h>

int main()
{
    int t,n,p[1000],i,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
            scanf("%d",&p[j]);
        printf("Scenario #%d:\n%d\n\n",i,insert_sort(p,n));
    }
    return 0;
}

int insert_sort(int p[1000],int n)
{
    int cnt=0,j,i,tmp;
    for(i=1;i<n;i++)
    {
        j=i-1;
        tmp=p[i];
        while(j>=0&&p[j]>tmp)
        {
            p[j+1]=p[j];
            cnt++;
            j--;
        }
        p[j+1]=tmp;
    }
    return cnt;
}
