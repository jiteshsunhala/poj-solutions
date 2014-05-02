#include<stdio.h>

int main()
{
    int i,found,num,cnt,n[300],t,g;
    char a[1000000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&g);
        for(i=0;i<g;i++)
            scanf("%d",&n[i]);
        found=0;
        num=0;
        while(!found)
        {
            cnt=0;
            num++;
            for(i=0;i<num;i++)
                a[i]='0';
            i=0;
            while(1&&i<g)
            {
                if(a[n[i]%num]=='1')
                    break;
                else
                {
                    cnt++;
                    a[n[i]%num]='1';
                }
                i++;
            }
            if(cnt==g)
                found=1;
        }
        printf("%d\n",num);
    }
    return 0;
}
