#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,s;
        scanf("%d",&n);
        s=n%10;
        n=n/10;
        while(n>0)
        {
            if(n<10)
            {
                s+=n;
                break;
            }
            else
                n/=10;
        }
        printf("%d\n",s);
    }
    return 0;
} 
