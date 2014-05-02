#include<stdio.h>

int digit(char);

int main()
{
    char c,a[26]="AVXSWDFGUHJKNBIOQEARYCQZTZ";
    while(scanf("%c",&c)!=EOF)
    {
        if(c==' '||c=='\n')
            printf("%c",c);
        else if(c>=48&&c<=57)
            digit(c);
        else if(c>=65&&c<=90)
            printf("%c",a[c-65]);
        else if(c=='-')
            printf("0");
        else if(c=='=')
            printf("-");
        else if(c=='[')
            printf("P");
        else if(c==']')
            printf("[");
        else if(c=='\\')
            printf("]");
        else if(c==';')
            printf("L");
        else if(c=='\'')
            printf(";");
        else if(c==',')
            printf("M");
        else if(c=='.')
            printf(",");
        else if(c=='/')
            printf(".");
    }
    return 0;
}

int digit(char c)
{
    if(c=='1')
        printf("`");
    else if(c=='0')
        printf("9");
    else
        printf("%c",c-1);
    return 0;
}
