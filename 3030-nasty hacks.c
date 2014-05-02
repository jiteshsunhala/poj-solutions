#include<stdio.h>

int main()
{
    int r,e,c,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&r,&e,&c);
        if(r>e-c)
            printf("do not advertise\n");
        else if(r==e-c)
            printf("does not matter\n");
        else
            printf("advertise\n");
    }
    return 0;
}
