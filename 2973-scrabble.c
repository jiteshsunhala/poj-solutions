#include<stdio.h>

int main()
{
    int i,j,k,t,cnt,nou,noc;
    char dic[1000][8],str[8];
    while(1)
    {
        scanf("%d",&t);
        if(!t)
            break;
        cnt=0;
        for(i=0;i<t;i++)
            scanf("%s",dic[i]);
        scanf("%s",str);
        for(i=0;i<t;i++)
        {
            if(strlen(dic[i])<=strlen(str))
            {
                for(j=0;j<strlen(str);j++)
                    if(str[j]!='_')
                    {
                        for(k=0;k<strlen(dic[i]);k++)
                            if(str[j]==dic[i][k])
                            {
                                dic[i][k]='-';
                                break;
                            }
                    }
                nou = noc = 0;
                for(j=0;j<strlen(str);j++)
                    if(str[j]=='_')
                        nou++;
                for(j=0;j<strlen(dic[i]);j++)
                    if(dic[i][j]>=65&&dic[i][j]<=90)
                        noc++;
                if(noc==0)
                    cnt++;
                else if(nou>=noc)
                    cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
