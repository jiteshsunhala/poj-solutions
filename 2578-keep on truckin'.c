#include<stdio.h>

int main()
{
    int i,n;
    for(i=0;i<3;i++)
    {
        scanf("%d",&n);
        if(n<=168)
            break;
    }
    if(i==3)
        printf("NO CRASH");
    else
        printf("CRASH %d",n);
    while(scanf("%d",&n)!=EOF);
    return 0;
}
