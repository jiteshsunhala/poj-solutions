#include<stdio.h>

int main()
{
    int sum,j,s,min,max,i;
    while(1)
    {
        scanf("%d",&j);
        if(j==0)
            break;
        sum=0;
        scanf("%d",&s);
        min=max=s;
        sum+=s;
        for(i=2;i<=j;i++)
        {
            scanf("%d",&s);
            if(s>max)
                max=s;
            if(s<min)
                min=s;
            sum+=s;
        }
        sum-=(max+min);
        printf("%d\n",sum/(j-2));
    }
    return 0;
}
