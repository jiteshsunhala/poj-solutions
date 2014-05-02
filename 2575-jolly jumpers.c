#include<stdio.h>

int main()
{
    int n,*p,*q,i,d;
    while(scanf("%d",&n)!=EOF)
    {
        p=(int*)malloc(sizeof(int)*n);
        q=(int*)malloc(sizeof(int)*n);
        for(i=0;i<n;i++)
        {
            q[i]=0;
            scanf("%d",&p[i]);
        }
        if(n==1)
            printf("Jolly\n");
        else
        {
            for(i=0;i<n-1;i++)
            {
                d=p[i]-p[i+1];
                if(d<0)
                    d*=-1;
                if(d>=1&&d<n)
                    q[d]=1;
            }
            d=1;
            for(i=1;i<n;i++)
                if(q[i]==0)
                {
                    d=0;
                    break;
                }
            if(d)
                printf("Jolly\n");
            else
                printf("Not jolly\n");
        }
    }
    return 0;
}
