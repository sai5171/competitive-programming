#include<stdio.h>
int main()
{
    long int n,x;
    long int i;
    long int count;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&x);
        count=0;
        while(x)
        {
          count+=x/5;
          x=x/5;
        }
        printf("%ld\n",count);
    }
    return 0;
} 
