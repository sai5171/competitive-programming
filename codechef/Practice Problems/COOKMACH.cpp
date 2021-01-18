#include<stdio.h>
int main()
{
    int t,i,m,n;
    int count=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&m,&n);
        count=0;
        if(m==n)
         ;
         else
         {
             while(m!=n)
             {
                 if(m<n)
                 {
                     n=n/2;
                     count++;
                 }
                 else if(m%2==0)
                 {
                     m=m/2;
                     count++;
                 }
                 else
                 {
                     m=(m-1)/2;
                     count++;
                 }
             }
             
         }
         printf("%d\n",count);
    }
    return 0;
} 
