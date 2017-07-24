#include<stdio.h>
#include<iostream>
#include<math.h>
int main()
{
    unsigned long int a,b;
    while(scanf("%lu %lu",&a,&b))
    {
        if(a==0 && b==0)
        break;
    printf("%lu %lu / %lu\n",(a/b),(a%b),(b));
    }
    return 0;
}
