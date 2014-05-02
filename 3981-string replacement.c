#include<stdio.h>

int main()
{
    int i=0;
    char c,a[100];
    while(scanf("%c",&c)!=EOF)
    {
        if(c==' '||c=='\n')
        {
            a[i]='\0';
            if(strcmp(a,"you")==0)
                printf("we");
            else
                printf("%s",a);
            printf("%c",c);
            i=0;
        }
        else
        {
            a[i]=c;
            i++;
        }
    }
    a[i]='\0';
    if(strcmp(a,"you")==0)
        printf("we");
    else
        printf("%s",a);
    return 0;
}
