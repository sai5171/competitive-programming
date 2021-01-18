#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		vector<long long int> v;
		long long int s=0;
		for(long long int i=0;i<n;i++)
		{
			long long int x;
			cin >> x;
			s+=x;
			v.push_back(x);
		}
		if(s%n==0)
		{
			long long int ec=s/n;
			long long int c=0;
			for(auto i=v.begin();i!=v.end();i++)
				c+=abs(*i-ec);
			cout << c << endl;
		}
		else
			cout << "-1\n";
	}
	return 0;
}
