#include<stdio.h>

int main()
{
    int a[100],b[100],i,j,n,p,min,max;
    scanf("%d%d",&n,&p);
    for(i=0;i<p;i++)
        b[i]=0;
    for(j=0;j<n;j++)
    {
        min=1001;
        max=0;
        for(i=0;i<p;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>max)
                max=a[i];
            if(a[i]<min)
                min=a[i];
        }
        for(i=0;i<p;i++)
        {
            if(a[i]==min&&b[i]!=-1)
                b[i]++;
            if(a[i]==max)
                b[i]=-1;
        }
    }
    n=(n+1)/2;
    min=0;
    for(i=0;i<p;i++)
    {
        if(b[i]>=n)
        {
            min=1;
            printf("%d ",i+1);
        }
    }
    if(!min)
        printf("0");
    return 0;
}
