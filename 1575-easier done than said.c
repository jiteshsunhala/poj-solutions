#include<stdio.h>
#define vowel(a) (a=='a'||a=='e'||a=='i'||a=='o'||a=='u')

int main()
{
    char a[30];
    int cnt;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"end")==0)
            break;
        if(check_one(a)&&check_two(a)&&check_three(a)&&check_four(a))
            printf("<%s> is acceptable.\n",a);
        else
            printf("<%s> is not acceptable.\n",a);
    }
    return 0;
}

int check_one(char *a)
{
    int i,cnt=0;
    for(i=0;cnt!=1&&a[i]!='\0';i++)
        if(vowel(a[i]))
            cnt++;
    return cnt;
}

int check_two(char *a)
{
    int i;
    if(strlen(a)>=3)
        for(i=0;i<strlen(a)-2;i++)
            if(vowel(a[i])&&vowel(a[i+1])&&vowel(a[i+2]))
                return 0;
    return 1;
}

int check_three(char *a)
{
    int i;
    if(strlen(a)>=3)
        for(i=0;i<strlen(a)-2;i++)
            if(!vowel(a[i])&&!vowel(a[i+1])&&!vowel(a[i+2]))
                return 0;
    return 1;
}

int check_four(char *a)
{
    int i;
    if(strlen(a)>=2)
        for(i=0;i<strlen(a)-1;i++)
            if(a[i]==a[i+1]&&a[i]!='e'&&a[i]!='o')
                return 0;
    return 1;
}
