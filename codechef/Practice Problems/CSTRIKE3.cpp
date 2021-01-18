#include<vector>
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[258];
char s[100005];
int main()
{
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--)
	{

		cin >> s;
		memset(a,0,sizeof(a));
		int sum=0;
		int len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(!a[s[i]])
			{
				a[s[i]]=1;
				sum++;
			}
		}
		if(sum%2)
			printf("Counter Terrorist\n");
		else
			printf("Terrorist\n");
	}
	return 0;
}
