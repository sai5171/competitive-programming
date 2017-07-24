#include<stdio.h>
#include<iostream>
int main()
{
    char a[10][100];
    int i,j;
    int n;
    int count=0;
    if(scanf("%d",&n)==1);
    while(n!=0)
    {
        int x=getchar();
        for(i=0;i<n;i++)
        {
            if(scanf("%[^\n]s",&a[i])==1);
            x=getchar();
        }
        count++;
        printf("SET %d\n",count);
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                printf("%s",a[i]);
                printf("\n");
            }
        }
        for(i=n-1;i>0;i--)
        {
            if(i%2==1)
            {
                printf("%s",a[i]);
                printf("\n");
            }
        }
        if(scanf("%d",&n)==1);
    }
    return 0;
}
