#include<stdio.h>

int main()
{
    int n,p[100],i;
    float res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&p[i]);
    merge(p,0,n-1);
    if(n==1)
        printf("%.3f",(float)p[0]);
    else
    {
        res=2*sqrt(p[0]*p[1]);
        for(i=2;i<n;i++)
            res=2*sqrt(res*p[i]);
        printf("%.3f",res);
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
                if(p[i]>p[j])
                        k[n++]=p[i++];
                else
                        k[n++]=p[j++];
        }
        while(i<=m)
                k[n++]=p[i++];
        while(j<=h)
                k[n++]=p[j++];
        for(i=0;i<(h-l+1);i++)
                p[l+i]=k[i];
        return 0;
}
