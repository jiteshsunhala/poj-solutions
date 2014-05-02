#include<stdio.h>

struct tree
{
    char str[20];
    int value;
    struct tree *left, *right;
}*root=NULL,*nw,*tmp;

int main()
{
    int m,n,val,sum;
    char a[20];
    scanf("%d%d",&m,&n);
    while(m--)
    {
        scanf("%s %d",a,&val);
        insert(a,val);
    }
    while(n--)
    {
        sum=0;
        while(1)
        {
            scanf("%s",a);
            if(strcmp(a,".")==0)
                break;
            sum+=search(a);
        }
        printf("%d\n",sum);
    }
    return 0;
}

int search(char *a)
{
    int value=0;
    tmp=root;
    while((strcmp(a,tmp->str)>0&&tmp->right!=NULL)||(strcmp(a,tmp->str)<0&&tmp->left!=NULL))
    {
        if(strcmp(a,tmp->str)>0)
            tmp=tmp->right;
        else if(strcmp(a,tmp->str)<0)
            tmp=tmp->left;
    }
    if(strcmp(a,tmp->str)==0)
        value=tmp->value;
    return value;
}

int insert(char *a, int val)
{
    nw=(struct tree*)malloc(sizeof(struct tree));
    strcpy(nw->str,a);
    nw->value=val;
    nw->left=nw->right=NULL;
    if(root==NULL)
        root=nw;
    else
    {
        tmp=root;
        while((strcmp(a,tmp->str)>0&&tmp->right!=NULL)||(strcmp(a,tmp->str)<0&&tmp->left!=NULL))
        {
            if(strcmp(a,tmp->str)>0)
                tmp=tmp->right;
            else if(strcmp(a,tmp->str)<0)
                tmp=tmp->left;
        }
        if(strcmp(a,tmp->str)>0)
            tmp->right=nw;
        else
            tmp->left=nw;
    }
    return 0;
}
