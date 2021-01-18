#include<stdio.h>
#include<iostream>
int main()
{
    int a,b,c,d,t1=0,t2=0;
    if(scanf("%d %d %d %d",&a,&b,&c,&d));
    t1=a+b+c+d;
    if(scanf("%d %d %d %d",&a,&b,&c,&d));
    t2=a+b+c+d;
    if(t1>t2)
        printf("Gunnar\n");
    else if(t1<t2)
        printf("Emma\n");
    else
        printf("Tie");
    return 0;
}
