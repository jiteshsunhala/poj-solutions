#include<stdio.h>

int main()
{
    char a[10000];
    int i,n,r;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"0")==0)
            break;
        if(strlen(a)>=2)
        {
            n = a[0]+a[1]-96;
            while(n>=10)
            {
                r = (n/10)+(n%10);
                n = r;
            }
            for(i=2;i<strlen(a);i++)
            {
                n += (a[i]-48);
                while(n>=10)
                {
                    r=(n/10)+(n%10);
                    n=r;
                }
            }
        }
        else
            n = a[0]-48;
        printf("%d\n",n);
    }
    return 0;
}
