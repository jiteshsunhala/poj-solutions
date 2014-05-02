#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int main()
{
    char a[201],b[201],c;
    int n,t,l1,r1,l2,r2;
    scanf("%d%c",&t,&c);
    while(t--)
    {
        cin.getline(a,200);
        cin.getline(b,200);
        n=strlen(b)-1;
        for(int i=0;a[i]!='\0';i++)
            if(a[i]!='<'&&a[i]!='>')
                printf("%c",a[i]);
        printf("\n");
        for(l1=0;a[l1]!='<';l1++);
        for(r1=l1+1;a[r1]!='>';r1++);
        for(l2=r1+1;a[l2]!='<';l2++);
        for(r2=l2+1;a[r2]!='>';r2++);
        for(int i=0;i<=n-3;i++)
            printf("%c",b[i]);
        for(int i=l2+1;i<r2;i++)
            printf("%c",a[i]);
        for(int i=r1+1;i<l2;i++)
            printf("%c",a[i]);
        for(int i=l1+1;i<r1;i++)
            printf("%c",a[i]);
        for(int i=r2+1;a[i]!='\0';i++)
            printf("%c",a[i]);
        //printf("%d %d %d %d",l1,r1,l2,r2);
        printf("\n");
    }
    return 0;
}
