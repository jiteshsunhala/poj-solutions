#include<stdio.h>
#include<string.h>
#include<stack>
#include<iostream>
using namespace std;

int main()
{
    int i,r1,r2,c1,c2,tmp,r[26],c[26],t;
    unsigned long long int res;
    stack<int> rows;
    stack<int> cols;
    stack<char> parens;
    scanf("%d",&t);
    char ch,exp[1000];
    while(t--)
    {
        scanf("%c",&ch);
        while(ch=='\n')
            scanf("%c",&ch);
        scanf("%d%d",&r[ch-65],&c[ch-65]);
    }
    while(scanf("%s",exp)!=EOF)
    {
        if(strlen(exp)==1)
            printf("0\n");
        else
        {
            res=0;
            tmp=1;
            for(i=0;i<strlen(exp);i++)
            {
                if(exp[i]=='(')
                    parens.push('(');
                else if(exp[i]>=65&&exp[i]<=90)
                {
                    rows.push(r[exp[i]-65]);
                    cols.push(c[exp[i]-65]);
                }
                else
                {
                    r2=rows.top();
                    rows.pop();
                    c2=cols.top();
                    cols.pop();
                    r1=rows.top();
                    rows.pop();
                    c1=cols.top();
                    cols.pop();
                    if(c1!=r2)
                    {
                        tmp=0;
                        break;
                    }
                    res+=r1*c1*c2;
                    rows.push(r1);
                    cols.push(c2);
                    parens.pop();
                }
            }
            if(tmp)
                printf("%llu\n",res);
            else
                printf("error\n");
        }
    }
    return 0;
}
