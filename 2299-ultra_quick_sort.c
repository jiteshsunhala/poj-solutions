#include<stdio.h>
#define size 500000
unsigned long long int cnt;
int main()
{
    int i,a[size],n;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        cnt=0;
        merge(a,0,n-1);
        printf("%llu\n",cnt);
    }
    return 0;
}

int merge(int *p,int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        merge(p,l,m);
        merge(p,m+1,h);
        sort(p,l,m,h);
    }
    return 0;
}

int sort(int *p,int l,int m,int h)
{
    int i=l,j=m+1,n=0,*k;
    k=(int *)malloc(sizeof(int)*(h-l+1));
    while(i<=m&&j<=h)
    {
        if(p[i]<p[j])
            k[n++]=p[i++];
        else
        {
            cnt+=(m-i+1);
            k[n++]=p[j++];
        }
    }
    while(i<=m)
        k[n++]=p[i++];
    while(j<=h)
        k[n++]=p[j++];
    for(i=0;i<(h-l+1);i++)
        p[l+i]=k[i];
    return 0;
}
