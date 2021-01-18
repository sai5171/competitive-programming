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
	sort(v.begin(),v.end(),[](long long int a,long long int b){return a>b;});
	long long int s=0;
	for(long long int i=0;i<n-1;i++)
	{
		if(v[i]-v[i+1]>=k && v[i]-v[n-1]>=k)
			s+=n-(i+1);
		else if(v[i]-v[i+1]<k && v[i]-v[n-1]<k)
			;
		else
		{
			for(long long int j=i+1;j<n;j++)
			{
				if(v[i]-v[j]>=k)
				{
					s+=n-j;
					break;
				}
			}
		}
	}
	cout << s << endl;
	return 0;
}
