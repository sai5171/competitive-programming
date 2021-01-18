#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <fstream>
#define pb push_back
#define f(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main()
{
	ofstream fout ("a.ou");
	int t=1;
	while(t!=0)
	{
		cin >> t;
		vector<int> v;
		vector<int> v1;
		vector<int> v2;
		int i;
		f(i,0,t)
		{
			int x;
			cin>>x;
			v1.pb(x);
			v.pb(x);
		}
		f(i,0,t)
		{
			int x;
			cin >> x;
			v2.pb(x);
		}
		sort(v1.begin(),v1.end(),[](int q,int w){return q<w;});
		sort(v2.begin(),v2.end(),[](int q,int w){return q<w;});
		map<int,int> m;
		for(int i=0;i<t;i++)
		{
			m[v1[i]]=v2[i];
		}
		for(i=0;i<t;i++)
		{
			cout << m[v[i]] <<endl;
		}
		cout <<endl;
	}
	return 0;
}