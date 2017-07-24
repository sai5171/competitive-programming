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
			vector<long long int> s;
			s.pb(0);
			while(n--)
			{
				long long int x;
				cin >> x;
				long long int siz=s.size();
				for(long long int i=0;i<siz;i++)
					s.pb(x+s[i]);
			}
			long long int check=0;
			for(long long int i=0;i<s.size();i++)
			{
				if(s[i]==m)
				{
					check=1;
					break;
				}
			}
			if(check==1)
				cout << "Yes\n";
			else
				cout << "No\n";
	}
	return 0;
}
