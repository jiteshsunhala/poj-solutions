#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char c,a[27],b[100];
    cin.getline(a,27);
    cin.getline(b,99);
    for(int i=0;i<strlen(b);i++)
    {
        if(b[i]>=97&&b[i]<=122)
            printf("%c",a[b[i]-97]);
        else if(b[i]>=65&&b[i]<=90)
            printf("%c",a[b[i]-65]-32);
        else 
            printf("%c",b[i]);
    }
    return 0;
}
