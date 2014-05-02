#include<stdio.h>

int main()
{
    int n,k,j,i;
    char a[100][20],str[201];
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        scanf("%s",str);
        j=k=0;
        for(i=0;i<strlen(str)/n;)
        {
            if(i%2==0)
            {
                a[i][j]=str[k++];
                j++;
            }
            else
            {
                a[i][j]=str[k++];
                j--;
            }
            if(j==n)
            {
                j--;
                i++;
            }
            if(j==-1)
            {
                j++;
                i++;
            }
        }
        for(j=0;j<n;j++)
        {
            for(i=0;i<strlen(str)/n;i++)
                printf("%c",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
