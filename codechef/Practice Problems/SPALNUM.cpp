#include<stdio.h>
#include<iostream>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
	{
		int a,b;
		int r=0;
		scanf("%d %d",&a,&b);
		for(int j=a;j<=b;j++)
		{
			int temp;
			int sum=0;
			temp=j;
			while(temp!=0)
			{
				int r;
				r=temp%10;
				sum=sum*10+r;
				temp=temp/10;
			}
			if(j==sum)
				r=r+sum;
		}
		printf("%d\n",r);
	}
    return 0;
} 
