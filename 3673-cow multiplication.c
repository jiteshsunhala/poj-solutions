#include<stdio.h>

int main()
{
    int sum=0,i,j;
    char a[20],b[20];
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
        for(j=0;b[j]!='\0';j++)
            sum+=((a[i]-48)*(b[j]-48));
    printf("%d",sum);
    return 0;
}
