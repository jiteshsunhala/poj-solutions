#include<stdio.h>

int main()
{
    char a[10][11],b[10][11];
    int r,c,k,i,j,cnt;
    while(1)
    {
        scanf("%d%d%d",&r,&c,&k);
        if(!r&&!c&&!k)
            break;
        cnt=0;
        for(i=0;i<r;i++)
            scanf("%s",a[i]);
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)
                b[i][j]='0';
        i=0;k--;
        while(1)
        {
            if(b[i][k]=='1')
                break;
            if(i<0||k<0||i==r||k==c)
                break;
            b[i][k]='1';
            if(a[i][k]=='W'&&k>=0)
                k--;
            else if(a[i][k]=='E'&&k<c)
                k++;
            else if(a[i][k]=='N'&&i>=0)
                i--;
            else if(a[i][k]=='S'&&i<r)
                i++;
            cnt++;
        }
        if(i<0||k<0||i==r||k==c)
            printf("%d step(s) to exit\n",cnt);
        else
        {
            int cnt1=0,t=i,l=k;
            while(1)
            {
                if(cnt1&&t==i&&l==k)
                    break;
                if(a[i][k]=='W'&&k>=0)
                    k--;
                else if(a[i][k]=='E'&&k<c)
                    k++;
                else if(a[i][k]=='N'&&i>=0)
                    i--;
                else if(a[i][k]=='S'&&i<r)
                    i++;
                cnt1++;
            }
            printf("%d step(s) before a loop of %d step(s)\n",cnt-cnt1,cnt1);
        }
    }
    return 0;
}
