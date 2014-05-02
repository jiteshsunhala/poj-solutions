#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

struct tree
{
    char word[30],mean[30];
    struct tree *left, *right;
}*root,*tmp,*nw;

int search(char *a)
{
    tmp=root;
    while((strcmp(a,tmp->mean)>0&&tmp->right!=NULL)||(strcmp(a,tmp->mean)<0&&tmp->left!=NULL))
    {
        if(strcmp(a,tmp->mean)>0)
            tmp=tmp->right;
        else if(strcmp(a,tmp->mean)<0)
            tmp=tmp->left;
    }
    if(strcmp(a,tmp->mean)==0)
        printf("%s\n",tmp->word);
    else
        printf("eh\n");
    return 0;
}

int insert(char *a, char *b)
{
    nw=new tree;
    strcpy(nw->word,a);
    strcpy(nw->mean,b);
    nw->left=nw->right=NULL;
    if(root==NULL)
        root=nw;
    else
    {
        tmp=root;
        while((strcmp(b,tmp->mean)>0&&tmp->right!=NULL)||(strcmp(b,tmp->mean)<0&&tmp->left!=NULL))
        {
            if(strcmp(b,tmp->mean)>0)
                tmp=tmp->right;
            else if(strcmp(b,tmp->mean)<0)
                tmp=tmp->left;
        }
        if(strcmp(b,tmp->mean)>0)
            tmp->right=nw;
        else
            tmp->left=nw;
    }
    return 0;
}

int main()
{
    char word[30],mean[30],text[100];
    int i,j;
    while(1)
    {
        cin.getline(text,99);
        if(text[0]=='\0')
            break;
        for(i=0;text[i]!=' ';i++)
            word[i]=text[i];
        word[i]='\0';
        i++;
        j=0;
        while(text[i]!='\0')
            mean[j++]=text[i++];
        mean[j]='\0';
        insert(word, mean);
    }
    while(scanf("%s",mean)!=EOF)
        search(mean);
    return 0;
}
