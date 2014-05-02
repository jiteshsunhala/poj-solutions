#include<stdio.h>

int main()
{
    float speed, weight, strength,cnt;
    while(1)
    {
        scanf("%f%f%f",&speed, &weight, &strength);
        if(speed==0&&weight==0&&strength==0)
            break;
        cnt=0;
        if(speed<=4.5&&weight>=150&&strength>=200)
        {
            printf("Wide Receiver");
            cnt++;
        }
        if(speed<=6.0&&weight>=300&&strength>=500)
        {
            if(cnt)
                printf(" ");
            printf("Lineman");
            cnt++;
        }
        if(speed<=5.0&&weight>=200&&strength>=300)
        {
            if(cnt)
                printf(" ");
            printf("Quarterback");
            cnt++;
        }
        if(!cnt)
            printf("No positions");
        printf("\n");
    }
    return 0;
}
