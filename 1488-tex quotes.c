#include<stdio.h>

int main()
{
    char c;
    int i=0;
    while(scanf("%c",&c)!=EOF)
    {
        if(c=='\"')
        {
            if(i)
                printf("''");
            else
                printf("``");
            i=i^1;
        }
        else
            printf("%c",c);
    }
    return 0;
}
