#include <stdio.h>
#include <iostream>
#include <set>
#include <functional>
#include <iterator>
#include <algorithm>
#include <vector>
#include <set>
#define pb push_back
#define lli long long int
using namespace std;
int main()
{
	lli n;
	cin >> n;
	vector<lli> v;
	int a[1000001]={0};
	a[0]=1;
	for(lli i=0;i<n;i++)
	{
		lli x;
		cin >> x;
		v.pb(x);
		a[x]=1;
	}
	for(lli i=0;i<=n;i++)
	{
		if(a[i]==0)
			cout << i << " ";
	}
	return 0;
}

