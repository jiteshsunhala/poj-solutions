#include<stdio.h>

int main()
{
    float a,b,c,d,t,p;
    while(1)
    {
        scanf("%f%f%f%f",&a,&b,&c,&d);
        if(!a&&!b)
            break;
        if(b>a)
        {
            t=a;
            a=b;
            b=t;
        }
        if(d>c)
        {
            t=c;
            c=d;
            d=t;
        }
        p=1;
        if(a>c)
            p=c/a;
        if(b>d)
        {
            if(b*p>d)
                p=d/b;
        }
        printf("%d%\n",(int)(p*100));
    }
    return 0;
}
