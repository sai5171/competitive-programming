#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	vector<long long int> v;
	long long int temp=t;
	while(t--)
	{
		long long int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long int max=0;
	for(auto i=v.begin();i!=v.end();i++)
	{
		if(max<((*i)*temp))
			max=(*i)*temp;
		temp--;
	}
	cout << max << endl;
	return 0;
}
