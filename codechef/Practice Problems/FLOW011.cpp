#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float gs;
        float s;
        scanf("%f",&s);
        if(s<1500)
            gs=s+s*0.1+s*0.9;
        else
            gs=s+500+s*0.98;
        printf("%g\n",gs);
    }
    return 0;
} 
