#include<stdio.h>

int main()
{
    int i,j,a[350][350],sum[350][350],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i][j]=0;
            if(j==0)
            {
                if(i==0)
                    sum[i][j]=a[i][j];
                else
                    sum[i][j]+=(sum[i-1][j]+a[i][j]);
            }
            else if(j==i)
                sum[i][j]+=(sum[i-1][j-1]+a[i][j]);
            else
            {
                if(sum[i-1][j-1]>=sum[i-1][j])
                    sum[i][j]+=(sum[i-1][j-1]+a[i][j]);
                else
                    sum[i][j]+=(sum[i-1][j]+a[i][j]);
            }
        }
    }
    j=sum[n-1][0];
    for(i=1;i<n;i++)
        if(j<sum[n-1][i])
            j=sum[n-1][i];
    printf("%d",j);
    return 0;
}
