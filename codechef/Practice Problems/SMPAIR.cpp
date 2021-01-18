#include<stdio.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long int n,i,a[100000];
        long int m1,m2;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        m1=a[0];
        for(i=1;i<n;i++)
        {
            if(m1>a[i])
                m1=a[i];
        }
        if(m1!=a[0])
            m2=a[0];
        else
            m2=a[1];
        for(i=0;i<n;i++)
        {
            if(m2>a[i] && a[i]!=m1)
                m2=a[i];
        }
        printf("%ld\n",m1+m2);
    }
    return 0;
}  
