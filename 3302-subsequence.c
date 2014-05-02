#include<stdio.h>

int main()
{
    int i,j,t;
    char a[101],b[101],c;
    int matrix[101][101];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%s",a,b);
        for(i=0;i<strlen(b)+1;i++)
            matrix[0][i]=0;
        for(i=0;i<strlen(a)+1;i++)
            matrix[i][0]=0;
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                    matrix[i+1][j+1]=matrix[i][j]+1;
                else
                {
                    if(matrix[i][j+1]>=matrix[i+1][j])
                        matrix[i+1][j+1]=matrix[i][j+1];
                    else
                        matrix[i+1][j+1]=matrix[i+1][j];
                }
            }
        }
        if(matrix[strlen(a)][strlen(b)]==strlen(b))
            printf("YES\n");
        else
        {
            for(i=0,j=strlen(b)-1;i<strlen(b)/2;i++,j--)
            {
                c=b[i];
                b[i]=b[j];
                b[j]=c;
            }
            for(i=0;i<strlen(b)+1;i++)
                matrix[0][i]=0;
            for(i=0;i<strlen(a)+1;i++)
                matrix[i][0]=0;
            for(i=0;i<strlen(a);i++)
            {
                for(j=0;j<strlen(b);j++)
                {
                    if(a[i]==b[j])
                        matrix[i+1][j+1]=matrix[i][j]+1;
                    else
                    {
                        if(matrix[i][j+1]>=matrix[i+1][j])
                            matrix[i+1][j+1]=matrix[i][j+1];
                        else
                            matrix[i+1][j+1]=matrix[i+1][j];
                    }
                }
            }
            if(matrix[strlen(a)][strlen(b)]==strlen(b))
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
