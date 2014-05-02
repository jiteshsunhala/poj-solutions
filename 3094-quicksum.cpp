#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char a[300];
    int sum;
    while(1)
    {
        cin.getline(a,299);
        if(strcmp(a,"#")==0)
            break;
        sum=0;
        for(int i=0;i<strlen(a);i++)
            if(a[i]>=65&&a[i]<=90)
                sum+=((i+1)*(a[i]-64));
        printf("%d\n",sum);
    }
    return 0;
}
