#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,q;
	cin >> n >> k >> q;
	k=k%n;
	deque<long long int> d;
	while(n--)
	{
		long long int x;
		cin >> x;
		d.push_back(x);
	}
	while(k--)
	{
		d.push_front(d.back());
		d.pop_back();
	}
	while(q--)
	{
		long long int x;
		cin >> x;
		cout << d[x] << endl;
	}
	return 0;
}
