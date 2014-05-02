#include<stdio.h>

int lis(int a[1000], int n)
{
    int len[1000],maxm=0,max,i,j;
    if(n==1)
        return 1;
    
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=0;j<i;j++)
            if(a[i]>a[j])
                if(len[j]>max)
                    max=len[j];
        len[i]=max+1;
        if(len[i]>maxm)
            maxm=len[i];
    }
    
    return maxm;
}

int main()
{
    int a[1000],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",lis(a,n));
    return 0;
}
