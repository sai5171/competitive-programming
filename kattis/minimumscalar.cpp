#include<stdio.h>
#include<algorithm>
#include<iostream>
bool ase(int,int);
bool dec(int,int);
bool ase(int i,int j)
{
    return i<j;
}
bool dec(int i,int j)
{
    return i>j;
}
int main()
{
    int t;
    if(scanf("%d",&t)==1);
    for(int j=0;j<t;j++)
    {
        int n;
        long int a[800],b[800],sum=0;
        if(scanf("%d",&n)==1);
        for(int i=0;i<n;i++)
            if(scanf("%ld",&a[i]));
        for(int i=0;i<n;i++)
            if(scanf("%ld",&b[i]));
        std::sort(a,a+n,ase);
        std::sort(b,b+n,dec);
        for(int i=0;i<n;i++)
            sum+=a[i]*b[i];
        printf("Case #%d: %ld\n",j+1,sum);
    }
    return 0;
}
