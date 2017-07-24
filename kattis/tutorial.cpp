#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
     long long  int m,n,a,fact=1;
    int t;
    if(scanf("%lld %lld %d",&m,&n,&t)==3);
    if(t==1)
    {
        int count=1;
        for(a=n;a>=1;a--)
        {
            fact=fact*a;
            if(fact>m)
            {
             count=0;
             break;
            }
        }
        if(count==0)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    else if(t==2)
    {
        a=(long long int)pow(2,n);
        if(a>m)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    else if(t==3)
    {
        a=(long long int)pow(n,4);
        //printf("%ld",a);
        if(a>m)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    else if(t==4)
    {
        a=(long long int)pow(n,3);
        if(a>m)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    else if(t==5)
    {
        a=(long long  int)pow(n,2);
        if(a>m)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    else if(t==6)
    {
        double x,p,q;
        double w;
        x=n;
        p=log(x);
        q=log(2);
        w=p/q;
        x=n*w;/*
        a=ceil_log2((unsigned long long int)n);
        a=a*n;*/
        
        //printf("%lf",x);
        if(x>m)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    else if(t==7)
    {
        a=n;
        if(a>m)
            printf("TLE\n");
        else
            printf("AC\n");
    }
    
    return 0;
}
