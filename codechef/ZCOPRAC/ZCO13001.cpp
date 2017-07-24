#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	scanf("%lld",&t);
	vector<long long int> v;
	for(long long int i=0;i<t;i++)
	{
		long long int x;
		scanf("%lld",&x);
		v.push_back(x);
	}
	sort(v.begin(),v.end(),[](long long int x,long long int y){return x>y;});
	long long int s1=0,s2=0;
	long long int x=t-1,y=0;
	for(auto i=0;i<v.size();i++)
	{
		s1+=v[i]*x;
		s2+=v[i]*y;
		x--;
		y++;
	}
	printf("%lld\n",abs(s1-s2));
	return 0;
}
