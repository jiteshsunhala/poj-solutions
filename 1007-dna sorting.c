#include<stdio.h>

int count;

int main()
{
    char **a,*b;
    int j,i,n,m,*cnt,*cnt1,min=10000;
    scanf("%d%d",&n,&m);
    a=(char**)malloc(sizeof(char*)*m);
    for(i=0;i<m;i++)
        a[i]=(char*)malloc(sizeof(char)*(n+1));
    cnt=(int*)malloc(sizeof(int)*m);
    cnt1=(int*)malloc(sizeof(int)*m);
    b=(char*)malloc(sizeof(char)*(n+1));
    for(i=0;i<m;i++)
    {
        cnt[i]=0;
        scanf("%s",a[i]);
        strcpy(b,a[i]);
        count=0;
        merge_sort(b,0,n-1);
        cnt[i]=count;
        cnt1[i]=cnt[i];
        if(cnt[i]<min)
            min=cnt[i];
    }
    merge_sort_int(cnt1,0,m-1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
            if(cnt1[i]==cnt[j])
                printf("%s\n",a[j]);
        while(cnt1[i+1]==cnt1[i])
            i++;
    }
    return 0;
}

int merge_sort(char *p,int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        merge_sort(p,l,m);
        merge_sort(p,m+1,h);
        merge(p,l,m,h);
    }
    return 0;
}

int merge(char *p,int l,int m,int h)
{
    int i=l,j=m+1,n=0;
    char *k;
    k=(char *)malloc(sizeof(char)*(h-l+1));
    while(i<=m&&j<=h)
    {
        if(p[i]<=p[j])
            k[n++]=p[i++];
        else
        {
            count+=(m-i+1);
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

int merge_sort_int(int *p,int l,int h)
{
    int m;
    if(l<h)
    {
        m=(l+h)/2;
        merge_sort_int(p,l,m);
        merge_sort_int(p,m+1,h);
        merge_int(p,l,m,h);
    }
    return 0;
}

int merge_int(int *p,int l,int m,int h)
{
    int i=l,j=m+1,n=0,*k;
    k=(int*)malloc(sizeof(int)*(h-l+1));
    while(i<=m&&j<=h)
    {
        if(p[i]<p[j])
            k[n++]=p[i++];
        else
        {
            count+=(m-i+1);
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
