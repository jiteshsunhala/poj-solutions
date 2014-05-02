#include<stdlib.h>
#include<stdio.h>

int partition(int *, int l, int h, int *, int *);
int quick_sort(int *, int , int , int *, int *);

int main()
{
    int *a,*b,n,k,i,max,*c;
    scanf("%d%d",&n,&k);
    a=new int [n];
    b=new int [n];
    c=new int [n];
    for(i=0;i<n;i++)
    {
        c[i]=i+1;
        scanf("%d%d",&a[i],&b[i]);
    }
    quick_sort(a,0,n-1,b,c);
    max=b[0];
    n=c[0];
    for(i=1;i<k;i++)
        if(b[i]>max)
        {
            n=c[i];
            max=b[i];
        }
    printf("%d",n);
    return 0;
}

int quick_sort(int *p,int l,int h, int *b, int *c)
{
    int i,j,pivot,t;
    if(l<h)
    {
        partition(p,l,h,b,c);
        pivot=p[l];
        i=l+1;
        j=l+1;
        while(i<=h)
        {
            if(p[i]>pivot)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
                t=b[i];
                b[i]=b[j];
                b[j]=t;
                t=c[i];
                c[i]=c[j];
                c[j]=t;
                j++;
            }
            i++;
        }
        p[l]=p[j-1];
        p[j-1]=pivot;
        t=b[l];
        b[l]=b[j-1];
        b[j-1]=t;
        t=c[l];
        c[l]=c[j-1];
        c[j-1]=t;
        quick_sort(p,l,j-2,b,c);
        quick_sort(p,j,h,b,c);
    }
    return 0;
}

int partition(int *p,int l,int h,int *b, int *c)
{
    int t,m=(l+h)/2;
    if((p[l]<p[m]&&p[m]<p[h])||(p[h]<p[m]&&p[m]<p[l]))
    {
        t=p[l];
        p[l]=p[m];
        p[m]=t;
        t=b[l];
        b[l]=b[m];
        b[m]=t;
        t=c[l];
        c[l]=c[m];
        c[m]=t;
    }
    else if((p[l]<p[h]&&p[h]<p[m])||(p[m]<p[h]&&p[h]<p[l]))
    {
        t=p[l];
        p[l]=p[h];
        p[h]=t;
        t=b[l];
        b[l]=b[h];
        b[h]=t;
        t=c[l];
        c[l]=c[h];
        c[h]=t;
    }
    return 0;
}
