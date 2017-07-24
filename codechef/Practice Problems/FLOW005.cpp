#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,c=0;
        scanf("%d",&a);
        c+=a/100;
        a=a%100;
        c+=a/50;
        a=a%50;
        c+=a/10;
        a=a%10;
        c+=a/5;
        a=a%5;
        c+=a/2;
        a=a%2;
        c+=a/1;
        printf("%d\n",c);
    }
    return 0;
} 
