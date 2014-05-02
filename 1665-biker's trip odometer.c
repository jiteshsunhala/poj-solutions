#include<stdio.h>

# define pi 3.1415927
# define feet_to_miles 5280
# define inches_to_feet 12
# define second_to_hour 3600
int main()
{
    float d,n,t;
    int i=0;
    while(1)
    {
        scanf("%f%f%f",&d,&n,&t);
        if(!n)
            break;
        i++;
        printf("Trip #%d:",i);
        d=pi*d;
        d=n*d;
        d/=(feet_to_miles*inches_to_feet);
        printf(" %.2f",d);
        t/=second_to_hour;
        d/=t;
        printf(" %.2f\n",d);
    }
    return 0;
}
