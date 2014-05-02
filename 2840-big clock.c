#include<stdio.h>

int main()
{
    char a[10],b[]={12,13,14,15,16,17,18,19,20,21,22,23,24,1,2,3,4,5,6,7,8,9,10,11};
    int n,h,m,i;
    scanf("%d",&n);
    while(n--)
    {
        h=m=i=0;
        scanf("%s",a);
        while(a[i]!=':')
        {
            h*=10;
            h+=(a[i]-48);
            i++;
        }
        i++;
        while(a[i]!='\0')
        {
            m*=10;
            m+=(a[i]-48);
            i++;
        }
        if(!m)
            printf("%d\n",b[h]);
        else
            printf("0\n");
    }
    return 0;
}
