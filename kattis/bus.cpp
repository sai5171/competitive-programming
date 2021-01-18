#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    int t;
    if(scanf("%d",&t));
    while(t--)
    {
        int n;
        if(scanf("%d",&n));
        if(n==1)
        {
            printf("1\n");
            continue;
        }
        int p=1;
        for(int i=2;i<=n;i++)
        {
            p=p+pow(2,i-1);
        }
        printf("%d\n",p);
    }

    return 0;
}
