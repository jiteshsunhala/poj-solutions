#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char a[100];
    int b[26],max,cnt,no;
    for(int i=0;i<26;i++)
        b[i]=0;
    max=0;
    for(int i=0;i<4;i++)
    {
        cin.getline(a,99);
        for(int j=0;j<strlen(a);j++)
        {
            if(a[j]>=65&&a[j]<=90)
            {
                b[a[j]-65]++;
                if(b[a[j]-65]>max)
                    max=b[a[j]-65];
            }
        }
    }
    while(max)
    {
        cnt=no=0;
        for(int i=0;i<26;i++)
            if(b[i]==max)
            {
                if(cnt)
                {
                    printf(" ");
                    for(int j=0;j<no;j++)   
                        printf("  ");
                    no=0;
                }
                printf("*");
                cnt=1;
                b[i]--;
            }
            else
            {
                if(!cnt)
                    printf("  ");
                else
                    no++;
            }
        printf("\n");
        max--;
    }
    for(int i=0;i<26;i++)
        printf("%c ",i+65);
    return 0;
}
