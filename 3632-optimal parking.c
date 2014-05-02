#include<stdio.h>

int main()
{
    int i,t,n,a[20];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        quick_sort(a,0,n-1);
        printf("%d\n",2*(a[n-1]-a[0]));
    }
    return 0;
}

int quick_sort(int *p,int l,int h)
{
    int i,j,pivot,t;
    if(l<h)
    {
        partition(p,l,h);
        pivot=p[l];
        i=l+1;
        j=l+1;
        while(i<=h)
        {
            if(p[i]<pivot)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
                j++;
            }
            i++;
        }
        p[l]=p[j-1];
        p[j-1]=pivot;
        quick_sort(p,l,j-2);
        quick_sort(p,j,h);
    }
    return 0;
}

int partition(int *p,int l,int h)
{
    int t,m=(l+h)/2;
    if((p[l]<p[m]&&p[m]<p[h])||(p[h]<p[m]&&p[m]<p[l]))
    {
        t=p[l];
        p[l]=p[m];
        p[m]=t;
    }
    else if((p[l]<p[h]&&p[h]<p[m])||(p[m]<p[h]&&p[h]<p[l]))
    {
        t=p[l];
        p[l]=p[h];
        p[h]=t;
    }
    return 0;
}
