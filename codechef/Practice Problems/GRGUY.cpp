#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    int j,x;
    int s;
    int c,f;
    int v;
    int count;
    char a[2000000],b[2000000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        scanf("%s",b);
        if(a[0]=='#' && b[0]=='#')
        {
         printf("No\n");
         continue;
        }
        else if(a[0]=='.' && b[0]=='#')
        {
            s=1;
        }
        else if(a[0]=='#' && b[0]=='.')
        {
            s=2;
        }
        else
        {
            c=0;
            f=0;
            for(j=0;j<strlen(a);j++)
           {
               if(a[j]=='.')
               c++;
               if(b[j]=='.')
               f++;
               if(a[j]=='#'||b[j]=='#')
               break;
           }
            if(c==f && c!=strlen(a))
            {
             printf("No\n");
             continue;
            }
            if(c>f)
            s=1;
            else
            s=2;
        }
        v=0;
        x=0;
        count=0;
        while(x<strlen(a)-1)
        {
            if(a[x+1]=='#' && b[x+1]=='#')
            {
                printf("No\n");
                v=1;
                break;
            }
            else if(s==1 && a[x+1]=='.')
             x++;
            else if(s==1 && a[x+1]=='#')
            {
                s=2;
                x++;
                count++;
            }
            else if(s==2 && b[x+1]=='.')
             x++;
            else if(s==2 && b[x+1]=='#')
            {
                s=1;
                x++;
                count++;
            }
        }
        if(v==0)
        printf("Yes\n%d\n",count);
    }
    return 0;
} 
