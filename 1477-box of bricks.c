#include<stdio.h>

int main()
{
    int i,set=0,no,n,p[50],sum;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        set++;
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&p[i]);
            sum+=p[i];
        }
        no=sum/n;
        sum=0;
        for(i=0;i<n;i++)
            if(p[i]>no)
                sum+=(p[i]-no);
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",set,sum);
    }
    return 0;
}
