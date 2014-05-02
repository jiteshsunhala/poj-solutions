#include<stdio.h>

int main()
{
    int t,n,s,t_s;
    char a[11];
    while(1)
    {
        scanf("%d%d",&t,&n);
        if(!t&&!n)
            break;
        t_s=0;
        while(t--)
        {
            scanf("%s%d",a,&s);
            t_s+=s;
        }
        printf("%d\n",n*3-t_s);
    }
    return 0;
}
