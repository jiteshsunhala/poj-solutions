#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    char c;
    while(1)
    {
        scanf("%c",&c);
        if(c=='#')
            break;
        if(c==' ')
            cout<<"%20";
        else if(c=='!')
            cout<<"%21";
        else if(c=='$')
            cout<<"%24";
        else if(c=='%')
            cout<<"%25";
        else if(c=='(')
            cout<<"%28";
        else if(c==')')
            cout<<"%29";
        else if(c=='*')
            cout<<"%2a";
        else
            printf("%c",c);
    }
    return 0;
}
