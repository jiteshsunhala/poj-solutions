#include<stdio.h>

int main()
{
    int n,i=0;
    while(1)
    {
        scanf("%d",&n);
        if(!n)
            break;
        i++;
        printf("%d. ",i);
        if(n%2==1)
            printf("odd %d\n",(3*n+1)/6);
        else
            printf("even %d\n",n/2);
    }
    return 0;
}
