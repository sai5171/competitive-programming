#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    int a,b,c,d;
    int i;
    int count=0,p=0;
    for(i=0;i<5;i++)
    {
        if(scanf("%d %d %d %d",&a,&b,&c,&d));
        if(count<a+b+c+d)
        {
            count=a+b+c+d;
            p=i+1;
        }
    }
    printf("%d %d",p,count);
    return 0;
}
