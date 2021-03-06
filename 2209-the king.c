#include<stdio.h>

int main()
{
    int i,n,p,*a,sum=0;
    scanf("%d%d",&n,&p);
    a=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        if(pow(a[i],p)>=0)
            sum+=(pow(a[i],p));
        else
            break;
    }
    printf("%d",sum);
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
            if(p[i]>pivot)
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
