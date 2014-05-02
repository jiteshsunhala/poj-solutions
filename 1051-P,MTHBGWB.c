#include<stdio.h>

char table[][5]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
             ".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","..--","---.",".-.-","----"};
int main()
{
    int i,n,t,j,msg[110],l,k,m;
    char a[110],res[410],tmp[5];
    scanf("%d",&t);
    for(m=1;m<=t;m++)
    {
        scanf("%s",a);
        n=strlen(a);
        k=0;
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]>=65&&a[i]<=90)
                j=a[i]-65;
            else if(a[i]=='_')
                j=26;
            else if(a[i]=='.')
                j=27;
            else if(a[i]==',')
                j=28;
            else if(a[i]=='?')
                j=29;
            for(l=0;table[j][l]!='\0';l++)
                res[k++]=table[j][l];
            msg[i]=strlen(table[j]);
        }
        res[k]='\0';
        k=0;
        for(i=n-1;i>=0;i--)
        {
            l=0;
            while(msg[i]--)
                tmp[l++]=res[k++];
            tmp[l]='\0';
            for(j=0;j<30;j++)
                if(strcmp(table[j],tmp)==0)
                {
                    if(j<26)
                        a[i]=j+65;
                    else if(j==26)
                        a[i]='_';
                    else if(j==27)
                        a[i]='.';
                    else if(j==28)
                        a[i]=',';
                    else if(j==29)
                        a[i]='?';
                }
        }
        printf("%d: ",m);
        for(i=n-1;i>=0;i--)
            printf("%c",a[i]);
        printf("\n");
    }
    return 0;
}
