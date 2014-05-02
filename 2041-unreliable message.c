#include<stdio.h>

int main()
{
    int k,n,i,j,len;
    char mes[30],c,rel[7];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",rel);
        scanf("%s",mes);
        len=strlen(mes);
        for(i=strlen(rel)-1;i>=0;i--)
        {
            if(rel[i]=='P')
            {
                for(j=0;j<len;j++)
                    if(mes[j]>48&&mes[j]<=57)
                        mes[j]-=1;
                    else if(mes[j]==48)
                        mes[j]='9';
            }
            else if(rel[i]=='M')
            {
                for(j=0;j<len;j++)
                    if(mes[j]>=48&&mes[j]<57)
                        mes[j]+=1;
                    else if(mes[j]==57)
                        mes[j]='0';
            }
            else if(rel[i]=='J')
            {
                c=mes[len-1];
                for(j=len-1;j>=0;j--)
                    mes[j+1]=mes[j];
                mes[0]=c;
            }
            else if(rel[i]=='C')
            {
                c=mes[0];
                for(j=1;j<len;j++)
                    mes[j-1]=mes[j];
                mes[len-1]=c;
            }
            else if(rel[i]=='A')
            {
                for(j=0,k=len-1;j<=(len-1)/2;j++,k--)
                {
                    c=mes[k];
                    mes[k]=mes[j];
                    mes[j]=c;
                }
            }
            else
            {
                for(j=0,k=((len-1)/2+1);j<=(len-1)/2;j++,k++)
                {
                    c=mes[k];
                    mes[k]=mes[j];
                    mes[j]=c;
                }
                if(len%2==1)
                    mes[len/2]=mes[len];
            }
        }
        mes[len]='\0';
        printf("%s\n",mes);
    }
    return 0;
}
