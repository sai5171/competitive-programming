#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	cin.get();
	while(n--)
	{
		string s;
		getline(cin,s);
		long long int c1=0,c0=0;
		for(auto i=s.begin();i!=s.end();i++)
		{
			if(*i=='1')
				c1++;
			else
				c0++;
		}
		if(c1+1==s.size() || c0+1==s.size())
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	return 0;
}
