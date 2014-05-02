#include<stdio.h>

int main()
{
    char a[100],b[100];
    int i,n,c,tmp;
    while(scanf("%s",a)!=EOF)
    {
        n=strlen(a);
        strcpy(b,a);
        i=tmp=1;
        while(1)
        {
            c=sum(b,a);
            if(c)
            {
                tmp=0;
                break;
            }
            c=search(b,a);
            if(!c)
            {
                tmp=0;
                break;
            }
            else
                i++;
            if(i==n)
                break;
        }
        if(tmp)
            printf("%s is cyclic\n",a);
        else
            printf("%s is not cyclic\n",a);
    }
    return 0;
}

int sum(char *b, char *a)
{
    int i,s,c=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
        s=a[i]+b[i]-96+c;
        b[i]=(s%10)+48;
        c=s/10;
    }
    return c;
}

int search(char *b, char *a)
{
    int num[60],k=0,n=strlen(a),i,j,l,tmp=0;
    for(i=0;i<n;i++)
        if(b[0]==a[i])
            num[k++]=i;
    for(i=0;i<k;i++)
    {
        l=(num[i]+1)%n;
        for(j=1;j<n;j++,l=(l+1)%n)
            if(b[j]!=a[l])
            {
                tmp++;
                break;
            }
    }
    if(tmp==k)
        return 0;
    else
        return 1;
}
