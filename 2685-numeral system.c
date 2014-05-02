#include<stdio.h>

int ret_mul(char);

int main()
{
    char a[9],b[9],c;
    int i,t,n1,n2,mul,cof,sum;
    scanf("%d",&t);
    while(t--)
    {
        n1=n2=0;
        scanf("%s%s",a,b);
        for(i=0;i<strlen(a);i++)
        {
            cof=1;
            if(a[i]>=48&&a[i]<=57)
            {
                cof=(a[i]-48);
                i++;
                mul=ret_mul(a[i]);
            }
            else
                mul=ret_mul(a[i]);
            n1+=(cof*mul);
        }
        for(i=0;i<strlen(b);i++)
        {
            cof=1;
            if(b[i]>=48&&b[i]<=57)
            {
                cof=(b[i]-48);
                i++;
                mul=ret_mul(b[i]);
            }
            else
                mul=ret_mul(b[i]);
            n2+=(cof*mul);
        }
        sum=n1+n2;
        cof=3;
        while(sum)
        {
            mul=0;
            i=ceil(pow(10,cof));
            while(sum>=i)
            {
                mul++;
                sum-=i;
            }
            if(i==1000)
                c='m';
            else if(i==100)
                c='c';
            else if(i==10)
                c='x';
            else
                c='i';
            if(mul==1)
                printf("%c",c);
            else if(mul>=2&&mul<=9)
                printf("%d%c",mul,c);
            cof--;
        }
        printf("\n");
    }
    return 0;
}

int ret_mul(char m)
{
    if(m=='m')
        return 1000;
    else if(m=='c')
        return 100;
    else if(m=='x')
        return 10;
    else
        return 1;
}
