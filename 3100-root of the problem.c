#include<stdio.h>

int main()
{
    int min,a,b,n,diff,k,res,p;
    while(1)
    {
        scanf("%d%d",&b,&n);
        if(!b&&!n)
            break;
        min = 1000000000;
        k=res=1;
        while(1)
        {
            p = pow(k,n);
            diff = b-p;
            if(diff<0)
                diff*=-1;
            if(diff < min)
            {
                min = diff;
                res = k;
            }
            else
                break;
            k++;
        }
        printf("%d\n",res);
    }
    return 0;
}
