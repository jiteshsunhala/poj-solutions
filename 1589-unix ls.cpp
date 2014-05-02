#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s[100],str;
    int row,col,n,k,l;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n-1;i++)
        {
            str = s[i];
            k=i;
            for(int j=i+1;j<n;j++)
            {
                if(str.compare(s[j])>0)
                {
                    str = s[j];
                    k=j;
                }
            }
            s[k] = s[i];
            s[i] = str;
        }
        l=0;
        for(int i=0;i<n;i++)
        {
            if(s[i].size()>l)
                l=s[i].size();
        }
        col = 60-l;
        col = col/(l+2);
        col++;
        row = n/col;
        if(n%col)
            row++;
        for(int i=0;i<60;i++)
            cout<<"-";
        cout<<endl;
        for(int i=0;i<row-1;i++)
        {
            for(int j=i;j<n;j+=row)
            {
                if(j+row<n)
                {
                    cout<<s[j];
                    for(int k=s[j].size();k<l+2;k++)
                        cout<<" ";
                }
                else
                    cout<<s[j]<<endl;
            }
        }
        for(int j=row-1;j<n;j+=row)
        {
            if(j+row<n)
            {
                cout<<s[j];
                for(int k=s[j].size();k<l+2;k++)
                    cout<<" ";
            }
            else
                cout<<s[j]<<endl;
        }
    }
    return 0;
}
