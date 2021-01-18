#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,b,c;
        int x=0,y=0,z=0;
        scanf("%f %f %f",&a,&b,&c);
        if(a>50)
            x=1;
        if(b<0.7f)
            y=1;
        if(c>5600)
            z=1;
        if(x==1 && y==1 && z==1)
            printf("10\n");
        else if(x==1 && y==1)
            printf("9\n");
        else if(y==1 && z==1)
            printf("8\n");
        else if(x==1 && z==1)
            printf("7\n");
        else if(x==1 || y==1 || z==1)
            printf("6\n");
        else
            printf("5\n");
    }
    return 0;
} 
