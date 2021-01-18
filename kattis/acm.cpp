#include<stdio.h>
#include<string.h>
#include<iostream>
int main()
{
    int a[26]={0},b[26]={0};
    int v;
    char c;
    char z[100];
    int ps=0;
    int sum=0;
    while(1==1)
    {
        scanf("%d",&v);
        if(v==-1)
        {
            for(int i=0;i<26;i++)
            {
                if(a[i]==1)
                sum=sum+b[i];
            }
            printf("%d %d\n",ps,sum);
         break;
        }
        scanf(" %c %s",&c,&z);
        //printf("%d %c %s",v,c,z);
        if(strcmp(z,"right")==0)
            {
                if(a[c-65]==0)
                {
                    a[c-65]=1;
                    b[c-65]+=v;
                    ps++;
                }
                else
                    continue;

            }
        else
            {
                if(a[c-65]==0)
                    b[c-65]+=20;
                else
                    continue;
            }
    }
    return 0;
}
