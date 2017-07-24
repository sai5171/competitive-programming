#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,t,i,j;
    scanf("%lld",&t);
    if(t>5000 || t<1)
        return 0;
    for(j=0;j<t;j++)
    {
        scanf("%lld",&n);
        if(n>pow(2,30) || n<1)
            return 0;
        if(n==1)
        {
            printf("2\n");
            continue;
        }   
        for(i=1;n>i;)
        {
            i=i<<1;
            i=i|1;
        }
        i=i>>1;
        if((i^(i+1))==n)
            printf("%lld\n",i);
        else
            printf("-1\n");
    }
    return 0;
} 
