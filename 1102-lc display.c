#include<stdio.h>
 
int main()
{
    char a[9];
    int s;
    while(1)
    {
        scanf("%d%s",&s,a);
        if(s==0)
            break;
        f1(s,a);
        f2(s,a);
        f3(s,a);
        f4(s,a);
        f5(s,a);
        printf("\n");
    }
    return 0;
}
 
int f2(int s, char *a)
{
    int i,j,k;
    char ch;
    for(j=0;j<s;j++)
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='7')
            {
                for(k=0;k<=s;k++)
                    printf(" ");
                printf("|");
            }
            else if(a[i]=='5'||a[i]=='6')
            {
                printf("|");
                for(k=0;k<s;k++)
                    printf(" ");
                printf(" ");
            }
            else
            {
                printf("|");
                for(k=0;k<s;k++)
                    printf(" ");
                printf("|");
            }
            if(i!=strlen(a)-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
 
int f4(int s, char *a)
{
    int i,j,k;
    char ch;
    for(j=0;j<s;j++)
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='1'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='7'||a[i]=='9')
            {
                for(k=0;k<=s;k++)
                    printf(" ");
                printf("|");
            }
            else if(a[i]=='2')
            {
                printf("|");
                for(k=0;k<s;k++)
                    printf(" ");
                printf(" ");
            }
            else
            {
                printf("|");
                for(k=0;k<s;k++)
                    printf(" ");
                printf("|");
            }
            if(i!=strlen(a)-1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
 
int f1(int s, char *a)
{
    int i,j;
    char ch;
    for(i=0;i<strlen(a);i++)
    {
        printf(" ");
        if(a[i]=='1'||a[i]=='4')
            ch=' ';
        else
            ch='-';
        for(j=0;j<s;j++)
            printf("%c",ch);
        printf(" ");
        if(i!=strlen(a)-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
 
int f5(int s, char *a)
{
    int i,j;
    char ch;
    for(i=0;i<strlen(a);i++)
    {
        printf(" ");
        if(a[i]=='1'||a[i]=='4'||a[i]=='7')
            ch=' ';
        else
            ch='-';
        for(j=0;j<s;j++)
            printf("%c",ch);
        printf(" ");
        if(i!=strlen(a)-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
 
int f3(int s, char *a)
{
    int i,j;
    char ch;
    for(i=0;i<strlen(a);i++)
    {
        printf(" ");
        if(a[i]=='1'||a[i]=='7'||a[i]=='0')
            ch=' ';
        else
            ch='-';
        for(j=0;j<s;j++)
            printf("%c",ch);
        printf(" ");
        if(i!=strlen(a)-1)
            printf(" ");
    }
    printf("\n");
    return 0;
}
