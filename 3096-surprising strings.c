#include<stdio.h>

int main()
{
    char str[100][3],a[80];
    int i,sur,len,j;
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"*")==0)
            break;
        len = strlen(a);
        sur = 1;
        for(i=0;i<=len-2;i++)
        {
            sur = find_strings(str,a,i,len);
            quick_sort(str, 0, sur-1);
            sur = check_unique(str, sur);
            if(!sur)
                break;
/*            for(j=0;j<sur;j++)
                printf("%s\n",str[j]);
            printf("\n");*/
        }
        if(sur)
            printf("%s is surprising.\n",a);
        else
            printf("%s is NOT surprising.\n",a);
    }
    return 0;
}

int find_strings(char str[100][3], char a[80], int i, int len)
{
    int j,k=0,l;
    for(j=0;j<len-i-1;j++)
    {
        str[k][0]=a[j];
        str[k][1]=a[j+i+1];
        str[k][2]='\0';
        k++;
    }
    return k;
}

int check_unique(char str[100][3], int n)
{
    int i;
    for(i=0;i<n-1;i++)
        if(strcmp(str[i],str[i+1])==0)
            return 0;
    return 1;
}

int quick_sort(char p[100][3],int l,int h)
{
    int i,j;
    char pivot[3], t[3];
    if(l<h)
    {
        partition(p,l,h);
        strcpy(pivot,p[l]);
        i=l+1;
        j=l+1;
        while(i<=h)
        {
            if(strcmp(p[i],pivot)<0)
            {
                strcpy(t,p[i]);
                strcpy(p[i],p[j]);
                strcpy(p[j],t);
                j++;
            }
            i++;
        }
        strcpy(p[l],p[j-1]);
        strcpy(p[j-1],pivot);
        quick_sort(p,l,j-2);
        quick_sort(p,j,h);
    }
    return 0;
}

int partition(char p[100][3],int l,int h)
{
    int m=(l+h)/2;
    char t[3];
    if((strcmp(p[l],p[m])<0&&strcmp(p[m],p[h])<0)||(strcmp(p[h],p[m])<0&&strcmp(p[m],p[l])<0))
    {
        strcpy(t,p[l]);
        strcpy(p[l],p[m]);
        strcpy(p[m],t);
    }
    else if((strcmp(p[l],p[h])<0&&strcmp(p[h],p[m])<0)||(strcmp(p[m],p[h])<0&&strcmp(p[h],p[l])<0))
    {
        strcpy(t,p[l]);
        strcpy(p[l],p[h]);
        strcpy(p[h],t);
    }
    return 0;
}
