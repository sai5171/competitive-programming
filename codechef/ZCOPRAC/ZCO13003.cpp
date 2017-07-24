#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	scanf("%lld %lld",&n,&k);
	vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		long long int x;
		scanf("%lld",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long int s=0;
	for(long long int b=0,e=n-1;b<=e;)
	{
		if(v[b]+v[e]<k)
		{
			s+=e-b;
			b++;
		}
		else
			e--;
	}
	cout << s << endl;
	return 0;
} 
