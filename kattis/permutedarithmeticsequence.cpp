//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>
#include <cmath>
//end header macros
//input macros
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define si(n) scanf("%d",&n);
//end input macros 
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> v;
		while(n--)
		{
			int x;
			cin >> x;
			v.pb(x);
		}
		int flag=0;
		int l=v.size();
		int d=v[1]-v[0];
		for(int i=2;i<l;i++)
		{
			if(v[i]-v[i-1]!=d)
				{flag=1;break;}
		}
		if(flag==0)
			{cout << "arithmetic" << endl;continue;}
		sort(v.begin(),v.end());
		flag=0;
		l=v.size();
		d=v[1]-v[0];
		for(int i=2;i<l;i++)
		{
			if(v[i]-v[i-1]!=d)
				{flag=1;break;}
		}
		if(flag==0)
			{cout << "permuted arithmetic" << endl;continue;}
		else
			cout << "non-arithmetic" << endl;
		
	}
	return 0;
}
