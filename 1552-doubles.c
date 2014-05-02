#include<stdio.h>

int main()
{
    int a[100],n,i,cnt,max;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
            break;
        cnt=0;
        max=n;
        for(i=1;i<100;i++)
            a[i]=0;
        while(n!=0)
        {
            if(n>max)
                max=n;
            a[n]=1;
            scanf("%d",&n);
        }
        for(i=1;i<=(max/2);i++)
            if(a[i]&&a[i*2])
                cnt++;
        printf("%d\n",cnt);
    }
    return 0;
}
