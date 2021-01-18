#include<stdio.h>
#include<iostream>
#include<algorithm>
int main()
{
 int n,p;
 scanf("%d %d",&n,&p);
 int a[100];
 for(int i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 if(a[p]>300)
 {
  printf("0 0");
  return 0;
 }
 int temp=a[p];
 a[p]=a[0];
 a[0]=temp;
 std::sort(a+1,a+n);
 int sum=a[0];
 int pa=a[0];
 int count=1;
 int max=300-a[0];
 for(int i=1;i<n;i++)
 {
  if(max>=a[i])
  {
   pa=pa+sum+a[i];
   sum=sum+a[i];
   max=max-a[i];
   count++;
  }
 }
 printf("%d %d",count,pa);
 return 0;
}