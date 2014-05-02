#include<stdio.h>

int main()
{
    char a[20],b[20],c[20];
    int n,i,car,s,k,j;
    scanf("%d",&n);
    while(n--)
    {
        car=j=0;
        scanf("%s%s",a,b);
        for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
        {
            s=(a[i]-48)+(b[i]-48)+car;
            c[j++]=(s%10)+48;
            car=s/10;
        }
        k=i;
        while(a[i]!='\0')
        {
            s=(a[i]-48)+car;
            c[j++]=(s%10)+48;
            car=s/10;
            i++;
        }
        while(b[k]!='\0')
        {
            s=(b[k]-48)+car;
            c[j++]=(s%10)+48;
            car=s/10;
            k++;
        }
        if(car)
            c[j++]=car+48;
        c[j]='\0';
        for(i=0;c[i]=='0'&&c[i]!='\0';i++);
        if(c[i]=='\0')
            printf("0");
        else
            for(j=i;c[j]!='\0';j++)
                printf("%c",c[j]);
        printf("\n");
    }
    return 0;
}
