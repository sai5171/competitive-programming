#include<stdio.h>
#include<iostream>
long int fun(long int);
long int fun(long int x)
{
    long int r,s=0;
    while(x>0)
    {
        r=x%10;
        s=s+r;
        x=x/10;
    }
    return s;
}
int main()
{
    long int m,n,p;
    scanf("%ld",&n);
    while(n!=0)
    {
        for(m=11;;m++)
        {
            long int s1,s2;
            p=m*n;
            s1=fun(p);
            s2=fun(n);
            if(s1==s2)
            {
                printf("%d\n",m);
                break;
            }
        }
        scanf("%ld",&n);
    }
    return 0;
}
