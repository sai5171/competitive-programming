#include<stdio.h>
#include<iostream>
int main()
{
	int x,count=0;
	char a[300];
	x=getchar();
	while(x!='\n' && x!=EOF)
	{
		if(x!='P')
			count++;
		x=getchar();
		if(x!='E')
			count++;
		x=getchar();
		if(x!='R')
			count++;
		x=getchar();
	}
	printf("%d",count);
	return 0;
}
