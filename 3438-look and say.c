#include<stdio.h>

int main()
{
    int t,cnt,i;
    char a[1010],c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",a);
        i=0;
        cnt=0;
        while(a[i]!='\0')
        {
            c=a[i];
            cnt=1;
            i++;
            while(a[i]==c)
            {
                cnt++;
                i++;
            }
            printf("%d%c",cnt,c);
        }
        printf("\n");
    }
    return 0;
}
