#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,a;
        scanf("%Ld",&n);
        if(n==1 || n==0)
        {
            printf("1\n");
            continue;
        }
        a=1;
        for(;n>1;n--)
            a=a*n;
        printf("%Ld\n",a);
    }
    return 0;
} 
