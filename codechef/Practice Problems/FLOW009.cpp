#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        double p,q,d=0;
        scanf("%lf %lf",&q,&p);
        if(q>1000)
            d=(p*q)/10;
        printf("%lf\n",(p*q)-d);
    }
    return 0;
} 
