#include<stdio.h>

int main()
{
    char c;
    float volt,current,power;
    int i,t,v=0,cur=0,p=0;
    scanf("%d%c",&t,&c);
    for(i=0;i<t-1;)
    {
        scanf("%c",&c);
        if(c=='\n')
        {
            i++;
            printf("Problem #%d\n",i);
            if(v&&cur)
                printf("P=%.2fW\n",volt*current);
            if(p&&cur)
                printf("U=%.2fV\n",power/current);
            if(v&&p)
                printf("I=%.2fA\n",power/volt);
            printf("\n");
            v=cur=p=0;
        }
        else if(c=='U'&&!v)
            v=check_volt(&volt);
        else if(c=='I'&&!cur)
            cur=check_current(&current);
        else if(c=='P'&&!p)
            p=check_power(&power);
    }
    v=cur=p=0;
    while(scanf("%c",&c)!=EOF)
    {
        if(c=='U'&&!v)
            v=check_volt(&volt);
        else if(c=='I'&&!cur)
            cur=check_current(&current);
        else if(c=='P'&&!p)
            p=check_power(&power);
    }
    printf("Problem #%d\n",t);
    if(v&&cur)
        printf("P=%.2fW\n",volt*current);
    if(p&&cur)
        printf("U=%.2fV\n",power/current);
    if(v&&p)
        printf("I=%.2fA\n",power/volt);
    printf("\n");
    return 0;
}

int check_volt(float *volt)
{
    char c;
    int p=-1;
    (*volt)=0;
    scanf("%c",&c);
    if(c=='=')
    {
        scanf("%c",&c);
        while(c>=48&&c<=57)
        {
            (*volt)*=10;
            (*volt)+=(c-48);
            scanf("%c",&c);
        }
        if(c=='.')
        {
            scanf("%c",&c);
            while(c>=48&&c<=57)
            {
                (*volt)+=(((float)(c-48))*pow(10,p));
                p--;
                scanf("%c",&c);
            }
            if(c=='m')
                (*volt)*=pow(10,-3);
            else if(c=='k')
                (*volt)*=pow(10,3);
            else if(c=='M')
                (*volt)*=pow(10,6);
        }
        else if(c=='m')
            (*volt)*=pow(10,-3);
        else if(c=='k')
            (*volt)*=pow(10,3);
        else if(c=='M')
            (*volt)*=pow(10,6);
        return 1;
    }
    else
        return 0;
}

int check_current(float *volt)
{
    char c;
    int p=-1;
    (*volt)=0;
    scanf("%c",&c);
    if(c=='=')
    {
        scanf("%c",&c);
        while(c>=48&&c<=57)
        {
            (*volt)*=10;
            (*volt)+=(c-48);
            scanf("%c",&c);
        }
        if(c=='.')
        {
            scanf("%c",&c);
            while(c>=48&&c<=57)
            {
                (*volt)+=(((float)(c-48))*pow(10,p));
                p--;
                scanf("%c",&c);
            }
            if(c=='m')
                (*volt)*=pow(10,-3);
            else if(c=='k')
                (*volt)*=pow(10,3);
            else if(c=='M')
                (*volt)*=pow(10,6);
        }
        else if(c=='m')
            (*volt)*=pow(10,-3);
        else if(c=='k')
            (*volt)*=pow(10,3);
        else if(c=='M')
            (*volt)*=pow(10,6);
        return 1;
    }
    else
        return 0;
}

int check_power(float *volt)
{
    char c;
    int p=-1;
    (*volt)=0;
    scanf("%c",&c);
    if(c=='=')
    {
        scanf("%c",&c);
        while(c>=48&&c<=57)
        {
            (*volt)*=10;
            (*volt)+=(c-48);
            scanf("%c",&c);
        }
        if(c=='.')
        {
            scanf("%c",&c);
            while(c>=48&&c<=57)
            {
                (*volt)+=(((float)(c-48))*pow(10,p));
                p--;
                scanf("%c",&c);
            }
            if(c=='m')
                (*volt)*=pow(10,-3);
            else if(c=='k')
                (*volt)*=pow(10,3);
            else if(c=='M')
                (*volt)*=pow(10,6);
        }
        else if(c=='m')
            (*volt)*=pow(10,-3);
        else if(c=='k')
            (*volt)*=pow(10,3);
        else if(c=='M')
            (*volt)*=pow(10,6);
        return 1;
    }
    else
        return 0;
}
