#include<stdio.h>

int main()
{
    int n,a[3],i;
    scanf("%d",&n);
    printf("Gnomes:\n");
    while(n--)
    {
        for(i=0;i<3;i++)
            scanf("%d",&a[i]);
        if((a[0]<=a[1]&&a[1]<=a[2])||(a[0]>=a[1]&&a[1]>=a[2]))
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}
