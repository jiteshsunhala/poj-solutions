#include<stdio.h>

int main()
{
    char a[200];
    int n,p,i,sum;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"0")==0)
            break;
        sum=0;
        n=strlen(a);
        p=n;
        for(i=0;i<n;i++)
        {
            if(a[i]!='0')
                sum+=((a[i]-48)*(ceil(pow(2,p))-1));
            p--;
        }
        printf("%d\n",sum);
    }
    return 0;
}
