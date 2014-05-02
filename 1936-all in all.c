#include<stdio.h>

int main()
{
    char s[100001],t[100001];
    int i,j;
    while(scanf("%s%s",s,t)!=EOF)
    {
        j=0;
        for(i=0;t[i]!='\0'&&s[j]!='\0';i++)
        {
            if(t[i]==s[j])
                j++;
        }
        if(s[j]=='\0')
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
