#include <stdio.h>
#include<iostream>
#include<math.h>
int main()
{   
    double x[1000000];
    double p,a,b,c,d,max=0,min=0,dif=0;
    long int k,n,i,j;
    scanf("%lf %lf %lf %lf %lf %ld",&p,&a,&b,&c,&d,&n);
    if(p<1 || p>1000)
    {
        printf("0");
        return 0;
    }  
    if(a<0 ||b<0 || c<0 || d<0 || a>1000 || b>1000 || c>1000 || d>1000)
    {
        printf("0");
        return 0;
    }
    if(n<1 || n>pow(10,6))
       {
           printf("0");
           return 0;
       }
    for(k=1;k<=n;k++)
    {
        x[k]=p*(sin(a*k+b)+cos(c*k+d)+2);
        
    }
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            min=x[i];
            max=x[i];
        }
        if(x[i]<min)
        {
            min=x[i];
            if(dif<(max-min))
            dif=max-min;
        }
        if(x[i]>max)
        {
            max=x[i];
            min=x[i];
        }
    }
    printf("%.9lf",dif);
    return 0;
}