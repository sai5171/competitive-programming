#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	vector<long long int> v;
	cin >> n >> k;
	while(n--)
	{
		long long int x;
		cin >> x;
		v.push_back(x);
	}
	long long int count=0;
	for(auto i=0;i<v.size()-1;i++)
	{
		for(auto j=i+1;j<v.size();j++)
		{
			if((v[i]+v[j])%k==0)
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
