#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    long int n;
    if(scanf("%ld",&n)==1);
    static long int a[50];
    long int i=0;
    while(n!=0)
    {
        a[i]=n%2;
        i++;
        n=n/2;
    }
    long int j=0;
    long int s=0;
    for(i--;i>=0;i--,j++)
    {
        s=s+pow(2,j)*a[i];
    }
    printf("%ld",s);
    return 0;
}
