#include<stdio.h>
#include<string.h>
int main()
{
	char s[1500];
	long long int t;
	scanf("%lld",&t);
	getchar();
	while(t--)
	{
		long long int i=0;
		gets(s);
		long long int sum=1;
		for(i=0;i<strlen(s);i++)
		{
			if(s[i]==' ')
				sum++;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
