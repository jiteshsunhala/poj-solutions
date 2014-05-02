#include<stdio.h>

int main()
{
    char p[100];
    int i,c,a,b;
    while(1)
    {
        scanf("%s",p);
        if(strcmp(p,"0+0=0")==0)
            break;
        c=a=b=0;
        for(i=strlen(p)-1;p[i]!='=';i--)
        {
            c*=10;
            c+=(p[i]-48);
        }
        i--;
        while(p[i]!='+')
        {
            b*=10;
            b+=(p[i]-48);
            i--;
        }
        i--;
        while(i>=0)
        {
            a*=10;
            a+=(p[i]-48);
            i--;
        }
        if(a+b==c)
            printf("True\n");
        else
            printf("False\n");
    }
    printf("True");
    return 0;
}
