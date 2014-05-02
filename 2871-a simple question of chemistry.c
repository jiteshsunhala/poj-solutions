#include<stdio.h>

int main()
{
    float m,n;
    scanf("%f",&m);
    if(m!=999)
    {
        while(1)
        {
            scanf("%f",&n);
            if(n==999)
                break;
            printf("%.2f\n",n-m);
            m=n;
        }
    }
    printf("End of Output");
    return 0;
}
