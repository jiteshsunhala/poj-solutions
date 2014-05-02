#include<stdio.h>

int val[20000];
struct tree
{
    char a[30];
    int copy;
    struct tree *left,*right;
}*root,*tmp,*nw;

int main()
{
    char str[30];
    int i,n,m;
    while(1)
    {
        scanf("%d%d",&n,&m);
        if(!n)
            break;
        root=tmp=NULL;
        for(i=0;i<n;i++)
            val[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%s",str);
            insert(str);
        }
        for(i=0;i<n;i++)
            printf("%d\n",val[i]);
    }
    return 0;
}

int insert(char *str)
{
    if(root==NULL)
    {
        tmp=(struct tree*)malloc(sizeof(struct tree));
        strcpy(tmp->a,str);
        tmp->copy=0;
        tmp->left=tmp->right=NULL;
        val[0]++;
        root=tmp;
    }
    else
    {
        tmp=root;
        while((strcmp(str,tmp->a)<0&&tmp->left!=NULL)||(strcmp(str,tmp->a)>0&&tmp->right!=NULL))
        {
            if(strcmp(str,tmp->a)<0)
                tmp=tmp->left;
            else
                tmp=tmp->right;
        }
        if(strcmp(str,tmp->a)<0)
        {
            nw=(struct tree*)malloc(sizeof(struct tree));
            strcpy(nw->a,str);
            nw->copy=0;
            nw->left=nw->right=NULL;
            val[0]++;
            tmp->left=nw;
        }
        else if(strcmp(str,tmp->a)>0)
        {
            nw=(struct tree*)malloc(sizeof(struct tree));
            strcpy(nw->a,str);
            nw->copy=0;
            nw->left=nw->right=NULL;
            val[0]++;
            tmp->right=nw;
        }
        else
        {
            val[tmp->copy]--;
            tmp->copy++;
            val[tmp->copy]++;
        }
    }
    return 0;
}
