#include<stdio.h>

int main()
{
    char word[81];
    int cols=0,i,h=0;
    while(scanf("%s",word)!=EOF)
    {
        if(strcmp(word,"<br>")==0)
        {
            if(h)
            {
                h=0;
                printf("\n");
            }
            printf("\n");
            cols=0;
        }
        else if(strcmp(word,"<hr>")==0)
        {
            if(cols||h)
                printf("\n");
            for(i=0;i<80;i++)
                printf("-");
            h=1;
            cols=0;
        }
        else
        {
            if(h)
            {
                printf("\n");
                h=0;
            }
            if(cols==0)
            {
                printf("%s",word);
                cols+=strlen(word);
            }
            else
            {
                if(cols+1+strlen(word)>80)
                {
                    cols=strlen(word);
                    printf("\n%s",word);
                }
                else
                {
                    printf(" %s",word);
                    cols+=(strlen(word)+1);
                }
            }
        }
    }
    printf("\n");
    return 0;
}
