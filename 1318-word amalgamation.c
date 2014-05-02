#include<stdio.h>

int cnt;
struct tree
{
    char str[10];
    struct tree *left, *right;
}*root=NULL,*nw,*tmp;

int main()
{
    char a[10];
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"XXXXXX")==0)
            break;
        insert(a);
    }
    while(1)
    {
        scanf("%s",a);
        if(strcmp(a,"XXXXXX")==0)
            break;
        quick_sort(a,0,strlen(a)-1);
        cnt=0;
        inorder(root,a);
        if(!cnt)
            printf("NOT A VALID WORD\n");
        printf("******\n");
    }
    system("pause");
    return 0;
}

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
}

int partition(char *p,int l,int h)
{
    char t;
    int m=(l+h)/2;
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

int inorder(struct tree *root, char *a)
{
    char str[10];
    if(root->left!=NULL)
        inorder(root->left,a);
    if(strlen(a)==strlen(root->str))
    {
        strcpy(str,root->str);
        quick_sort(str,0,strlen(str)-1);
        if(strcmp(str,a)==0)
        {
            printf("%s\n",root->str);
            cnt++;
        }
    }
    if(root->right!=NULL)
        inorder(root->right,a);
    return 0;
}

int insert(char *a)
{
    nw=(struct tree*)malloc(sizeof(struct tree));
    strcpy(nw->str,a);
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
