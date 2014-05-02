#include<stdio.h>

int main()
{
    int a[9],i;
    while(scanf("%d",&a[8])!=EOF)
    {
        for(i=7;i>=0;i--)
            scanf("%d",&a[i]);
        i=8;
        while(i>=0&&!a[i])
            i--;
        if(i>1)
        {
            if(a[i]!=1&&a[i]!=-1)
                printf("%dx^%d",a[i],i);
            else if(a[i]==1)
                printf("x^%d",i);
            else
                printf("-x^%d",i);
            i--;
            while(i>1)
            {
                if(a[i])
                {
                    if(a[i]>0)
                    {
                        if(a[i]!=1)
                            printf(" + %dx^%d",a[i],i);
                        else
                            printf(" + x^%d",i);
                    }
                    else
                    {
                        if(a[i]!=-1)
                            printf(" - %dx^%d",-a[i],i);
                        else
                            printf(" - x^%d",i);
                    }
                }
                i--;
            }
            if(a[1])
            {
                if(a[1]>0)
                {
                    if(a[1]!=1)
                        printf(" + %dx",a[i]);
                    else
                        printf(" + x");
                }
                else
                {
                    if(a[1]!=-1)
                        printf(" - %dx",-a[i]);
                    else
                        printf(" - x");
                }
            }
            if(a[0])
            {
                if(a[0]>0)
                {
                    if(a[0]!=1)
                        printf(" + %d",a[i]);
                    else
                        printf(" + 1");
                }
                else
                {
                    if(a[1]!=-1)
                        printf(" - %d",-a[i]);
                    else
                        printf(" - 1");
                }
            }
        }
        else if(i==1)
        {
            if(a[i]!=1&&a[i]!=-1)
                printf("%dx",a[i]);
            else if(a[i]==1)
                printf("x");
            else
                printf("-x");
            if(a[0])
            {
                if(a[0]>0)
                {
                    if(a[0]!=1)
                        printf(" + %d",a[i]);
                    else
                        printf(" + 1");
                }
                else
                {
                    if(a[1]!=-1)
                        printf(" - %d",-a[i]);
                    else
                        printf(" - 1");
                }
            }
        }
        else if(i==0)
            printf("%d",a[i]);
        else
            printf("0");
        printf("\n");
    }
    return 0;
}
