#include<stdio.h>

int main()
{
    char a[41],b[41],c[100];
    int i,m,n,j,k,p,s,car;
    scanf("%s%s",a,b);
    for(i=0;i<100;i++)
        c[i]='0';
    m=strlen(a);
    n=strlen(b);
    for(i=m-1;i>=0;i--)
    {
        k=100-(m-i);
        car=0;
        for(j=n-1;j>=0;j--)
        {
            p=((a[i]-48)*(b[j]-48))+c[k]-48+car;
            car=p/10;
            c[k]=(p%10)+48;
            k--;
        }
        while(car)
        {
            p=c[k]-48+car;
            car=p/10;
            c[k]=(p%10)+48;
        }
    }
    for(j=0;c[j]=='0';j++);
    while(j<100)
        printf("%c",c[j++]);
    return 0;
}
