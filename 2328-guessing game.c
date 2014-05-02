#include<stdio.h>

int main()
{
    int n,low=1,high=10;
    char a[6],b[5];
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        scanf("%s%s",a,b);
        if(low<=high)
        {
            if(n>=low&&n<=high)
            {
                if(strcmp(a,"too")==0&&strcmp(b,"high")==0)
                    high=n-1;
                else if(strcmp(a,"too")==0&&strcmp(b,"low")==0)
                    low=n+1;
                else
                {
                    low=1;
                    high=10;
                    printf("Stan may be honest\n");
                }
            }
            else if(n<low)
            {
                if((strcmp(a,"too")==0&&strcmp(b,"high")==0)||(strcmp(a,"right")==0&&strcmp(b,"on")==0))
                {
                    low=1;
                    high=10;
                    while(strcmp(a,"right")!=0&&strcmp(b,"on")!=0)
                        scanf("%d%s%s",&n,a,b);
                    printf("Stan is dishonest\n");
                }
            }
            else
            {
                if((strcmp(a,"too")==0&&strcmp(b,"low")==0)||(strcmp(a,"right")==0&&strcmp(b,"on")==0))
                {
                    low=1;
                    high=10;
                    while(strcmp(a,"right")!=0&&strcmp(b,"on")!=0)
                        scanf("%d%s%s",&n,a,b);
                    printf("Stan is dishonest\n");
                }
            }
        }
        else
        {
            low=1;
            high=10;
            while(strcmp(a,"right")!=0&&strcmp(b,"on")!=0)
                scanf("%d%s%s",&n,a,b);
            printf("Stan is dishonest\n");
        }
    }
    return 0;
}
