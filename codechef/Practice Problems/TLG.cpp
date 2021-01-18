#include<stdio.h>
#include<math.h>
int main()
{
    int n,a=0,b=0;
    int i;
    int w=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        a+=x;
        b+=y;
        if(abs(a-b)>d)
        {
            d=abs(a-b);
            w=a>b?1:2;
        }
    }
    printf("%d %d",w,d);
    return 0;
} 
