#include<stdio.h>

int main()
{
    int mat[24][24],n,i,a,b,cola,colb,j,k;
    char cmd[10];
    for(i=0;i<24;i++)
        for(j=0;j<24;j++)
            mat[i][j]=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        mat[0][i]=i;
    while(1)
    {
        scanf("%s",cmd);
        if(strcmp(cmd,"quit")==0)
            break;
        if(strcmp(cmd,"move")==0)
        {
            scanf("%d%s%d",&a,cmd,&b);
            if(strcmp(cmd,"onto")==0)
            {
                cola=search(mat,a);
                colb=search(mat,b);
                if(cola!=colb)
                {
                    adjust(mat,a,cola);
                    for(i=0;mat[i][cola]!=a;i++);
                    mat[i][cola]=-1;
                    adjust(mat,b,colb);
                    for(i=0;mat[i][colb]!=b;i++);
                    mat[i+1][colb]=a;
                }
            }
            else
            {
                cola=search(mat,a);
                colb=search(mat,b);
                if(cola!=colb)
                {
                    adjust(mat,a,cola);
                    for(i=0;mat[i][cola]!=a;i++);
                    mat[i][cola]=-1;
                    for(i=0;mat[i][colb]!=-1;i++);
                    mat[i][colb]=a;
                }
            }
        }
        else
        {
            scanf("%d%s%d",&a,cmd,&b);
            if(strcmp(cmd,"onto")==0)
            {
                cola=search(mat,a);
                colb=search(mat,b);
                if(cola!=colb)
                {
                    adjust(mat,b,colb);
                    for(i=0;mat[i][colb]!=b;i++);
                    i++;
                    for(j=0;mat[j][cola]!=a;j++);
                    for(k=j;mat[k][cola]!=-1;k++)
                    {
                        mat[i++][colb]=mat[k][cola];
                        mat[k][cola]=-1;
                    }
                }
            }
            else
            {
                cola=search(mat,a);
                colb=search(mat,b);
                if(cola!=colb)
                {
                    for(i=0;mat[i][colb]!=-1;i++);
                    for(j=0;mat[j][cola]!=a;j++);
                    for(k=j;mat[k][cola]!=-1;k++)
                    {
                        mat[i++][colb]=mat[k][cola];
                        mat[k][cola]=-1;
                    }
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d:",i);
        j=0;
        while(mat[j][i]!=-1)
        {
            printf(" %d",mat[j][i]);
            j++;
        }
        printf("\n");
    }
    return 0;
}

int search(int mat[24][24], int n)
{
    int i,j;
    for(i=0;i<24;i++)
        for(j=0;mat[j][i]!=-1;j++)
            if(mat[j][i]==n)
                return i;
    return 0;
}

int adjust(int mat[24][24], int a, int cola)
{
    int i,j,k;
    for(i=0;mat[i][cola]!=a;i++);
    for(j=i+1;mat[j][cola]!=-1;j++)
    {
        k=mat[j][cola];
        mat[0][k]=k;
        mat[j][cola]=-1;
    }
    return 0;
}
