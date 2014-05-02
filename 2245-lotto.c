#include<stdio.h>

int main()
{
    int n,a[13],b[6],i;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<=n-6;i++)
            search(a,b,n,i,0);
        printf("\n");
    }
    return 0;
}

int search(int a[13], int b[6], int n, int i, int k)
{
    int j;
    if(k==5)
    {
        b[k]=a[i];
        for(j=0;j<6;j++)
            printf("%d ",b[j]);
        printf("\n");
    }
    else
    {
        b[k]=a[i];
        for(j=i+1;j<n;j++)
            search(a,b,n,j,k+1);
    }
    return 0;
}
