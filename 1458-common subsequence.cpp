#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
#define size 1400

int main()
{
    char a[size],b[size];
    int l1,l2,p[size+1][size+1];
    while(scanf("%s%s",a,b)!=EOF)
    {
        l1=strlen(a);
        l2=strlen(b);
        for(int i=0;i<l2+1;i++)
            p[i][0]=0;
        for(int j=0;j<l1+1;j++)
            p[0][j]=0;
        for(int i=0;i<l2;i++)
        {
            for(int j=0;j<l1;j++)
            {
                if(b[i]==a[j])
                    p[i+1][j+1]=p[i][j]+1;
                else
                {
                    if(p[i+1][j]>p[i][j+1])
                        p[i+1][j+1]=p[i+1][j];
                    else
                        p[i+1][j+1]=p[i][j+1];
                }
            }
        }
        printf("%d\n",p[l2][l1]);
    }
    return 0;
}
