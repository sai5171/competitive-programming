#include<stdio.h>
#include<iostream>
int main()
{
    int n;
    if(scanf("%d",&n));
    int i;
    int a=0,b=1;
    if(n==0)
    {
        printf("0 0\n");
        return 0;
    }
    if(n==1)
    {
        printf("0 1\n");
        return 0;
    }
    for(i=2;i<=n;i++)
    {
        int t=a;
        a=b;
        b=b+t;
    }
    printf("%d %d\n",a,b);
    return 0;
}
