#include<stdio.h>
#include<iostream>
int main()
{
	int t;
	if(scanf("%d",&t));
	int x;
	x=getchar();
	while(t--)
    {
        char a[100];
        int e=0;
        int i=0;
        int count=0;
        if(scanf("%s",&a));
        printf("%s ",a);

        scanf("%d",&x);
        if(x>=2010)
         {
            e++;

        }
        x=getchar();
        scanf("%d",&x);
        x=getchar();
        scanf("%d",&x);
        scanf("%d",&x);
        if(x>=1991)
         {
            e++;

        }
        x=getchar();
        scanf("%d",&x);
        x=getchar();
        scanf("%d",&x);
        scanf("%d",&x);
        if(x>=41)
         {
                i=1;
        }
        if(e>=1)
            printf("eligible\n");
        else if(e==0 && i==1)
            printf("ineligible\n");
        else
            printf("coach petitions\n");
    }
	return 0;
}
