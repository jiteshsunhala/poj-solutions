#include<stdio.h>

int main()
{
    int n,p,cnt,cnt1;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        cnt=0;
        p=n;
        while(n)
        {
            if(n&1)
                cnt++;
            n=n>>1;
        }
        p++;
        while(1)
        {
            n=p;
            cnt1=0;
            while(n)
            {
                if(n&1)
                    cnt1++;
                n=n>>1;
                if(cnt1>cnt)
                    break;
            }
            if(cnt==cnt1)
                break;
            p++;
        }
        printf("%d\n",p);
    }
    return 0;
}
