#include<stdio.h>

int main()
{
    int last,i,num[26]={-1,1,2,3,-1,1,2,-1,-1,2,2,4,5,5,-1,1,2,6,2,3,-1,1,-1,2,-1,2};
    char a[30];
    while(scanf("%s",a)!=EOF)
    {
        for(i=0;i<strlen(a);i++)
        {
            last=num[a[i]-65];
            if(last>0)
                printf("%d",last);
            while(num[a[i+1]-65]==last&&i<strlen(a))
                i++;
        }
        printf("\n");
    }
    return 0;
}
