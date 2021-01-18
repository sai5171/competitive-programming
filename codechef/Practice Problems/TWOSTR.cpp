#include<stdio.h>
#include<string.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	getchar();
	while(n--)
	{
		char s1[100],s2[100];
		int c=0;
		long long int i;
		gets(s1);
		gets(s2);
		for(i=0;i<strlen(s1);i++)
		{
			if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i])
			{
				c=1;
				break;
			}
		}
		if(c==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
