#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	scanf("%lld",&n);
	vector<long long int> v;
	while(n--)
	{
		long long int x;
		scanf("%lld",&x);
		v.push_back(x);
	}
	long long int max=0;
	long long int pos=0;
	long long int c=0;
	for(long long int i=0;i<v.size();i++)
	{
		if(v[i]==1)//(
		{
			c++;
		}
		else//)
		{
			c--;
		}
		if(max<c)
		{
			max=c;
			pos=i+1;
		}
	}
	cout << max << " " << pos << " ";
	max=0;
	pos=0;
	c=0;
	long long int count=0;
	for(long long int i=0;i<v.size();i++)
	{
		if(v[i]==1)//(
		{
			c++;
		}
		else//)
		{
			c--;
		}
		count++;
		if(c==0)
		{
			if(max<count)
			{
				max=count;
				pos=i-count+2;
			}
			count=0;
		}
	}
	cout << max << " " << pos << endl;
	return 0;
} 
