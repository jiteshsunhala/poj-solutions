#include<stdio.h>

int main()
{
    int c=0,i,j,tp;
    char a[101],b[251];
    scanf("%s",a);
    if(a[0]>=97&&a[0]<=122)
    {
        for(i=1;i<strlen(a);i++)
            if(a[i]=='_')
            {
                c=1;
                break;
            }
        j=tp=0;
        if(c)
        {
            for(i=0;i<strlen(a);i++)
            {
                if(a[i]=='_')
                {
                    i++;
                    if(a[i]>=97&&a[i]<=122)
                        b[j++]=a[i]-32;
                    else
                    {
                        tp=1;
                        printf("Error!");
                        break;
                    }
                }
                else if(a[i]>=97&&a[i]<=122)
                    b[j++]=a[i];
                else
                {
                    tp=1;
                    printf("Error!");
                    break;
                }
            }
            if(!tp)
            {
                b[j]='\0';
                printf("%s",b);
            }
        }
        else
        {
            for(i=0;i<strlen(a);i++)
            {
                if(a[i]>=65&&a[i]<=90)
                {
                    b[j++]='_';
                    b[j++]=a[i]+32;
                }
                else if(a[i]>=97&&a[i]<=122)
                    b[j++]=a[i];
                else
                {
                    tp=1;
                    printf("Error!");
                    break;
                }
            }
            if(!tp)
            {
                b[j]='\0';
                printf("%s",b);
            }
        }
    }
    else
        printf("Error!");
    return 0;
}
