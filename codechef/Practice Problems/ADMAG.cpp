#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
 unsigned long long n,i,j,t,temp,c1,c2;
 scanf("%llu",&t);
 if(t>100000)
  return 0;
 for(i=1;i<=t;i++)
 {
  c1=0;
  c2=1;
  scanf("%llu",&n);
  if(n>1000000000000000000)
   return 0;
  for(j=1;;j++)
  {
    temp=c1+c2;
    if(temp>=n)
     break;
    else
    {
     c1=c2;
     c2=temp;
    }
  }
  if(temp==n)
   printf("%d\n",j);
  else
   printf("%d\n",j-1);
 }
 return 0;
} 
