#include<stdio.h>

int main()
{
    char a[11], b[11];
    int i,j,s,c,cnt;
    while(1)
    {
        scanf("%s%s",a,b);
        if(strcmp(a,"0")==0&&strcmp(b,"0")==0)
            break;
        i=strlen(a)-1;
        j=strlen(b)-1;
        c=cnt=0;
        while(i>=0&&j>=0)
        {
            s=(a[i]-48)+(b[j]-48)+c;
            c=s/10;
            cnt+=c;
            i--;
            j--;
        }
        while(i>=0)
        {
            s=(a[i]-48)+c;
            c=s/10;
            cnt+=c;
            i--;
        }
        while(j>=0)
        {
            s=(b[j]-48)+c;
            c=s/10;
            cnt+=c;
            j--;
        }
        if(cnt==0)
            printf("No carry operation.\n");
        else if(cnt==1)
            printf("1 carry operation.\n");
        else 
            printf("%d carry operations.\n",cnt);
    }
    return 0;
}
