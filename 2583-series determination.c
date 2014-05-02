#include<stdio.h>

int main()
{
    int i,a,b,c,f1,f2;
    while(scanf("%d%d%d",&c,&f1,&f2)!=EOF)
    {
        a=(f2-2*f1+c)/2;
        b=f1-c-a;
        for(i=3;i<6;i++)
            printf("%d ",a*i*i+b*i+c);
        printf("\n");
    }
    return 0;
}
