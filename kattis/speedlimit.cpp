#include<stdio.h>
#include<iostream>
int main()
{
    int n;
    if(scanf("%d",&n));
    while(n!=-1)
    {
        int i;
        int s,t,d=0;
        int pt=0;
        for(i=0;i<n;i++)
        {
            if(scanf("%d %d",&s,&t)==2);
            if(pt!=0)
            {
                int temp;
                temp=pt;
                pt=t;
                t=t-temp;
                d=d+s*t;
            }
            else{
                pt=t;
                d=d+s*t;
            }
        }
        printf("%d miles\n",d);
        if(scanf("%d",&n));
    }
    return 0;
}
