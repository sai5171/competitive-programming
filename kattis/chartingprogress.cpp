//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main()
{
	//ifstream fin ("a.in");
	//ofstream fou ("a.ou");
	string s;
	vector<lli> v;
	lli max=0;
	lli c=0;
	while(getline(cin,s))
	{
		if(s=="")
		{
			c=max;
			for(lli i=0;i<v.size();i++)
			{
				lli j=0;
				for(;j<c-v[i];j++)
					cout << '.';
				for(lli k=0;k<v[i];k++,j++)
					cout << '*';
				for(;j<max;j++)
					cout << '.';
				c=c-v[i];
				cout << endl;
			}
			cout << endl;
			v.clear();
		}
		else
		{
			lli count=0;
			for(lli i=0;i<s.size();i++)
			{
				if(s[i]=='*')
					count++;
			}
			max=s.size();
			v.pb(count);
		}
	}
	c=max;
	for(lli i=0;i<v.size();i++)
	{
		lli j=0;
		for(;j<c-v[i];j++)
			cout << '.';
		for(lli k=0;k<v[i];k++,j++)
			cout << '*';
		for(;j<max;j++)
			cout << '.';
		c=c-v[i];
		cout << endl;
	}
	cout << endl;
	v.clear();
	return 0;
}
