#include<stdio.h>
int main()
{
    long int a,b,count=0,i,x;
    scanf("%ld %ld",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%ld",&x);
        if(x%b==0)
            count++;
    }
    printf("%ld",count);
    return 0;
} 
