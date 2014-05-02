#include<stdio.h>

char forward[100][75],back[100][75];
int f_top=-1,b_top=-1;

int main()
{
    char cmd[10],url[75],cur[75]="http://www.acm.org/";
    while(1)
    {
        scanf("%s",cmd);
        if(strcmp(cmd,"QUIT")==0)
            break;
        if(strcmp(cmd,"VISIT")==0)
        {
            scanf("%s",url);
            b_top++;
            strcpy(back[b_top], cur);
            strcpy(cur, url);
            f_top=-1;
            printf("%s\n",cur);
        }
        else if(strcmp(cmd,"FORWARD")==0)
        {
            if(f_top==-1)
                printf("Ignored\n");
            else
            {
                b_top++;
                strcpy(back[b_top],cur);
                strcpy(cur,forward[f_top]);
                f_top--;
                printf("%s\n",cur);
            }
        }
        else
        {
            if(b_top==-1)
                printf("Ignored\n");
            else
            {
                f_top++;
                strcpy(forward[f_top],cur);
                strcpy(cur,back[b_top]);
                b_top--;
                printf("%s\n",cur);
            }
        }
    }
    return 0;
}
