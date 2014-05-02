#include<stdio.h>
int main()
{
	int i,n,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);
		if((x==y)||(x==y+2))
        {
            if(x%2==0)
                 printf("%d",x+y);
            else 
                 printf("%d",x+y-1);
        }
        else 
             printf("No Number");        
        printf("\n");
    } 
	return 0;
}
