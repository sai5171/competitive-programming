#include<bits/stdc++.h>

using namespace std;
void fun(long long int x,unordered_set<long long int> &s,vector<vector<long long int> > &v)
{
	s.insert(x);
	if(v[x].size()==0)
		return ;
	for(auto i=0;i<v[x].size();i++)
	{
		fun(v[x][i],s,v);
	}
}

int main()

{

	long long int n;
	cin >> n;
	vector<vector<long long int> > v(n+1);
	for(auto i=1;i<=n;i++)
	{
		long long int x;
		cin >> x;
		v[x].push_back(i);
	}
	/*
	for(auto i=1;i<=n;i++)
	{
		for(auto j=0;j<v[i].size();j++)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	*/
	long long int q;
	cin >> q;
	while(q--)
	{
		long long int t;
		cin >> t;
		unordered_set<long long int> s;
		while(t--)
		{
			long long int x;
			cin >> x;
			fun(x,s,v);
		}
		cout << s.size() << endl;
	}

	return 0;

}
