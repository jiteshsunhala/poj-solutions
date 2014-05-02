#include<stdio.h>

int main()
{
    float d,a[16][3],diff,r,g,b,min_r,min_g,min_b;
    int i,j;
    for(i=0;i<16;i++)
        for(j=0;j<3;j++)
            scanf("%f",&a[i][j]);
    while(1)
    {
        scanf("%f%f%f",&r,&g,&b);
        if(r==-1&&g==-1&&b==-1)
            break;
        diff=sqrt(pow(r-a[0][0],2)+pow(g-a[0][1],2)+pow(b-a[0][2],2));
        min_r=a[0][0];
        min_g=a[0][1];
        min_b=a[0][2];
        for(i=1;i<16;i++)
        {
            d=sqrt(pow(r-a[i][0],2)+pow(g-a[i][1],2)+pow(b-a[i][2],2));
            if(d<diff)
            {
                diff=d;
                min_r=a[i][0];
                min_g=a[i][1];
                min_b=a[i][2];
            }
        }
        printf("(%d,%d,%d) maps to (%d,%d,%d)\n",(int)r,(int)g,(int)b,(int)min_r,(int)min_g,(int)min_b);
    }
    return 0;
}
