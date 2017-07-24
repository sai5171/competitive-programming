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
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n,m;
		cin >> n >> m;
		vector<string> v;
		set<string> s;
		while(n--)
		{
			string s1;
			cin >> s1;
			v.pb(s1);
		}
		while(m--)
		{
			long long int x;
			cin >> x;
			while(x--)
			{
				string s1;
				cin >> s1;
				s.insert(s1);
			}
		}
		for(long long int i=0;i<v.size();i++)
		{
			if(find(s.begin(),s.end(),v[i])!=s.end())
				cout << "YES" << " ";
			else
				cout << "NO" << " ";
		}
		cout << endl;
	}
	return 0;
}
