#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char a[10001];
    while(1)
    {
        cin.getline(a,10000);
        if(strcmp(a,"ENDOFINPUT")==0)
            break;
        cin.getline(a,10000);
        for(int i=0;i<strlen(a);i++)
        {
            if(a[i]=='A')
                printf("V");
            else if(a[i]=='B')
                printf("W");
            else if(a[i]=='C')
                printf("X");
            else if(a[i]=='D')
                printf("Y");
            else if(a[i]=='E')
                printf("Z");
            else if(a[i]>=70&&a[i]<=90)
                printf("%c",a[i]-5);
            else
                printf("%c",a[i]);
        }
        cin.getline(a,10000);
        printf("\n");
    }
    return 0;
}
