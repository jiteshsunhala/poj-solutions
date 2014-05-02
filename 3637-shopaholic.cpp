#include<stdio.h>
#include<iostream>
using namespace std;

int partition(int *, int , int );

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

int main()
{
    int n,t,*p;
    unsigned long long int sum;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum=0;
        p=new int[n];
        for(int i=0;i<n;i++)
            scanf("%d",&p[i]);
        quick_sort(p,0,n-1);
        for(int i=2;i<n;i+=3)
            sum+=p[i];
        printf("%d\n",sum);
    }
    return 0;
}
