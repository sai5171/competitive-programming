#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		vector<long long int> v;
		long long int n;
		cin >> n;
		while(n--)
		{
			long long int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		if(v.size()==1)
		{
			cout << "0" << endl;
			continue;
		}
		long long int res=0;
		long long int last;
		for(auto i=v.begin()+1;i!=v.end();i++)
		{
			res+=abs(*i-*(i-1));
			last=*(v.end()-1)-*(v.begin());
		}
		cout << res+last << endl;
	}
	return 0;
}