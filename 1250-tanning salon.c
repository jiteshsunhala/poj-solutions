#include<stdio.h>

int main()
{
    int i,cust[26],n,lv;
    char bed[21],c;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        for(i=0;i<26;i++)
            cust[i]=0;
        for(i=1;i<=n;i++)
            bed[i]='-';
        lv=0;
        scanf("%c",&c);
        while(c==' ')
            scanf("%c",&c);
        while(c!='\n')
        {
            if(cust[c-65])
            {
                for(i=1;i<=n;i++)
                    if(c==bed[i])
                    {
                        bed[i]='-';
                        break;
                    }
                cust[c-65]=0;
                if(i==n+1)
                    lv++;
            }
            else
            {
                for(i=1;i<=n;i++)
                    if(bed[i]=='-')
                        break;
                cust[c-65]=1;
                if(i<=n)
                    bed[i]=c;
            }
            scanf("%c",&c);
        }
        if(!lv)
            printf("All customers tanned successfully.\n");
        else
            printf("%d customer(s) walked away.\n",lv);
    }
    return 0;
}
