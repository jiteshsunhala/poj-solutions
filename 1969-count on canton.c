#include<stdio.h>
 
int main()
{
    float root,n;
    int t,s,r,num;
    while(scanf("%f",&n)!=EOF)
    {
        root=(sqrt(8*n+1)-1)/2;
        if(floor(root)!=root)
            root=ceil(root);
        r=root;
        num=n;
        s=(r-1)*r/2;
        if(r%2==0)
            printf("TERM %d IS %d/%d\n",num,num-s,r+1-num+s);
        else
            printf("TERM %d IS %d/%d\n",num,r+1-num+s,num-s);
    }
    return 0;
}
