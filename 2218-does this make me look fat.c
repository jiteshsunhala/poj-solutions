#include<stdio.h>

int main()
{
    char text[10][21],string[21];
    int k,j,l,max,i,weight[10],d,w;
    while(scanf("%s",string)!=EOF)
    {
        for(i=0;i<10;i++)
            weight[i]=0;
        i=0;
        while(1)
        {
            scanf("%s",string);
            if(strcmp(string,"END")==0)
                break;
            strcpy(text[i], string);
            scanf("%d%d",&d,&w);
            weight[i]=w-d;
            i++;
        }
        for(l=0;l<i;l++)
        {
            max=weight[0];
            j=0;
            for(k=1;k<i;k++)
                if(weight[k]>max)
                {
                    max=weight[k];
                    j=k;
                }
            printf("%s\n",text[j]);
            weight[j]=0;
        }
        printf("\n");
    }
    return 0;
}
