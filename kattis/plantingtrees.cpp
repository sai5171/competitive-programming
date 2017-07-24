#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long long int n,t;
	cin >> n;
	t=n;
	vector<long long int> v;
	while(t--)
	{
		long long int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end(),[](const long long int x,const long long int y){return x>y;});
	t=n;
	for(int i=0;i<v.size();i++)
	{
		v[i]=v[i]-t;
		t--;
	}
	auto max=max_element(v.begin(),v.end());
	cout << (n+2)+(*max);
	return 0;
}