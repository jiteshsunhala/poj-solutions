#include<stdio.h>

int main()
{
    int a[100000],len,mlen,n,t,i,j,sum,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&s);
        sum=mlen=i=j=len=0;
        while(sum<s&&i<n)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
            i++;
            len++;
        }
        if(sum>=s)
            mlen=len;
        else
            mlen=-1;
        while(i<n)
        {
            sum-=a[j];
            len--;
            j++;
            if(len<mlen)
                mlen=len;
            while(sum<s&&i<n)
            {
                scanf("%d",&a[i]);
                sum+=a[i];
                i++;
                len++;
            }
        }
        while(sum>=s&&j<n)
        {
            sum-=a[j];
            j++;
            len--;
            if(len<mlen)
                mlen=len;
        }
        printf("%d\n",mlen+1);
    }
    return 0;
}
