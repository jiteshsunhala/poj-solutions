#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int partition(char*, int ,int);

int quick_sort(char *p,int l,int h)
{
    int i,j;
    char pivot, t;
    if(l<h)
    {
        partition(p,l,h);
        pivot=p[l];
        i=l+1;
        j=l+1;
        while(i<=h)
        {
            if(p[i]<pivot)
            {
                t=p[i];
                p[i]=p[j];
                p[j]=t;
                j++;
            }
            i++;
        }
        p[l]=p[j-1];
        p[j-1]=pivot;
        quick_sort(p,l,j-2);
        quick_sort(p,j,h);
    }
    return 0;
}

int partition(char *p,int l,int h)
{
    int m=(l+h)/2;
    char t;
    if((p[l]<p[m]&&p[m]<p[h])||(p[h]<p[m]&&p[m]<p[l]))
    {
        t=p[l];
        p[l]=p[m];
        p[m]=t;
    }
    else if((p[l]<p[h]&&p[h]<p[m])||(p[m]<p[h]&&p[h]<p[l]))
    {
        t=p[l];
        p[l]=p[h];
        p[h]=t;
    }
    return 0;
}

int main()
{
    char key[11],cip[101],a[10][10],tmp[11];
    int i,k,len;
    while(1)
    {
        scanf("%s",key);
        strcpy(tmp,key);
        if(strcmp(key,"THEEND")==0)
            break;
        scanf("%s",cip);
        quick_sort(tmp,0,strlen(tmp)-1);
        i=k=0;
        len=strlen(cip)/strlen(key);
        while(i<strlen(tmp))
        {
            for(int j=0;j<strlen(key);j++)
                if(key[j]==tmp[i])
                    for(int l=0;l<len;l++)
                        a[l][j]=cip[k++];
            i++;
            while(tmp[i]==tmp[i-1]&&i<strlen(tmp))
                i++;
        }
        for(i=0;i<len;i++)
            for(int j=0;j<strlen(key);j++)
                printf("%c",a[i][j]);
        printf("\n");
    }
    return 0;
}
