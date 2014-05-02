#include<stdio.h>

int main()
{
    int cnt,j,c,s,i,n,k,fact,ans,num,inc;
    char res[12]="2.0000000000",tmp[12];
    printf("n e\n- -----------\n0 1\n1 2");
    for(i=2;i<10;i++)
    {
        k=inc=0;
        num=1;
        fact = factorial(i);
        cnt=0;
        while(num&&cnt<10)
        {
            num*=10;
            ans = num/fact;
            num%=fact;
            cnt++;
            tmp[k++]=ans+48;
        }
        while(k<10)
        {
            tmp[k]='0';
            k++;
        }
        s=c=0;
        for(k=9;k>=0;k--)
        {
            s=(tmp[k]-48)+(res[k+2]-48)+c;
            c=s/10;
            res[k+2]=(s%10)+48;
        }
        if(c)
            res[0]++;
        if(res[11]>'5')
            inc++;
        for(k=10;res[k]=='0';k--);
        j=0;
        printf("\n%d ",i);
        while(j<=k)
        {
            if(inc&&j==10)
                printf("%c",res[j]+1);
            else
                printf("%c",res[j]);
            j++;
        }
    }
    return 0;
}

int factorial(int i)
{
    if(i==1)
        return 1;
    else
        return i*factorial(i-1);
    return 0;
}
