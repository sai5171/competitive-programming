#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x;
		scanf("%d",&x);
		int temp;
		temp=x;
		int sum=0;
		while(temp!=0)
		{
			int r;
			r=temp%10;
			sum=sum*10+r;
			temp=temp/10;
		}
		if(sum==x)
			printf("wins\n");
		else
			printf("losses\n");
	}
	return 0;
} 
