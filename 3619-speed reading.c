#include<stdio.h>

int main()
{
    int n,k,s,t,r,m,tot;
    scanf("%d%d",&n,&k);
    while(k--)
    {
        scanf("%d%d%d",&s,&t,&r);
        m=n;
        tot=0;
        while(m)
        {
            if(s*t<=m)
            {
                m-=s*t;
                tot+=t;
            }
            else
            {
                tot+=m/s;
                m%=s;
                if(m)
                {
                    m=0;
                    tot++;
                }
            }
            if(m)
                tot+=r;
        }
        printf("%d\n",tot);
    }
    return 0;
}
