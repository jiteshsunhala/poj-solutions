#include<stdio.h>
int main()
{
        int n,j,*p,k,i,s,sc,cnt;
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
                scanf("%d%d",&n,&s);
                p=(int*)malloc(sizeof(int)*s);
                for(i=0;i<s;i++)
                        scanf("%d",&p[i]);
                merge(p,0,s-1);
                i=sc=cnt=0;
                while(sc<n&&i<s)
                {
                        sc+=p[i];
                        cnt++;
                        i++;
                }
                printf("Scenario #%d:\n",j);
                if(sc<n)
                        printf("impossible\n\n");
                else
                        printf("%d\n\n",cnt);
        }
        return 0;
}
int merge(int *p,int l,int h)
{
        int m;
        if(l<h)
        {
                m=(l+h)/2;
                merge(p,l,m);
                merge(p,m+1,h);
                sort(p,l,m,h);
        }
        return 0;
}
int sort(int *p,int l,int m,int h)
{
        int i=l,j=m+1,n=0,*k;
        k=(int *)malloc(sizeof(int)*(h-l+1));
        while(i<=m&&j<=h)
        {
                if(p[i]>p[j])
                        k[n++]=p[i++];
                else
                        k[n++]=p[j++];
        }
        while(i<=m)
                k[n++]=p[i++];
        while(j<=h)
                k[n++]=p[j++];
        for(i=0;i<(h-l+1);i++)
                p[l+i]=k[i];
        return 0;
}
