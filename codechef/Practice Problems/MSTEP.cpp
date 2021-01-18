#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int s[250000][2];
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<n;j++)
			{
				long long int x;
				scanf("%lld",&x);
				s[x-1][0]=i;
				s[x-1][1]=j;
				
			}
		}
		long long int p=pow(n,2);
		long long int i=1;
		long long int sum=0;
		while(i<p)
		{
			sum+=abs(s[i][0]-s[i-1][0])+abs(s[i][1]-s[i-1][1]);
			i++;
		}
		printf("%lld\n",sum);
	}
	return 0;
}
