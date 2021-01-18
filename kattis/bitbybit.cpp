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
int main(){
	lli n;
	while(scanf("%lld",&n)==1 && n!=0)
	{
		getchar();
		vector<char> v(32,'?');
		while(n--)
		{
			string s;
			lli x,y;
			cin >> s;
			if(s=="SET")
			{
				cin >> x;
				v[32-1-x]='1';
			}
			else if(s=="CLEAR")
			{
				cin >> x;
				v[32-1-x]='0';
			}
			else if(s=="OR")
			{
				cin >> x >> y;
				if(v[32-1-x]=='0' && v[32-1-y]=='0')
					v[32-1-x]='0';
				else if(v[32-1-x]=='0' && v[32-1-y]=='1')
					v[32-1-x]='1';
				else if(v[32-1-x]=='1' && v[32-1-y]=='0')
					v[32-1-x]='1';
				else if(v[32-1-x]=='1' && v[32-1-y]=='1')
					v[32-1-x]='1';
				else if(v[32-1-x]=='0' && v[32-1-y]=='?')
					v[32-1-x]='?';
				else if(v[32-1-x]=='1' && v[32-1-y]=='?')
					v[32-1-x]='1';
				else if(v[32-1-x]=='?' && v[32-1-y]=='0')
					v[32-1-x]='?';
				else if(v[32-1-x]=='?' && v[32-1-y]=='1')
					v[32-1-x]='1';
			}
			else if(s=="AND")
			{
				cin >> x >> y;
				if(v[32-1-x]=='0' && v[32-1-y]=='0')
					v[32-1-x]='0';
				else if(v[32-1-x]=='0' && v[32-1-y]=='1')
					v[32-1-x]='0';
				else if(v[32-1-x]=='1' && v[32-1-y]=='0')
					v[32-1-x]='0';
				else if(v[32-1-x]=='1' && v[32-1-y]=='1')
					v[32-1-x]='1';
				else if(v[32-1-x]=='0' && v[32-1-y]=='?')
					v[32-1-x]='0';
				else if(v[32-1-x]=='1' && v[32-1-y]=='?')
					v[32-1-x]='?';
				else if(v[32-1-x]=='?' && v[32-1-y]=='0')
					v[32-1-x]='0';
				else if(v[32-1-x]=='?' && v[32-1-y]=='1')
					v[32-1-x]='?';
			}
		}
		for(auto i=v.begin();i!=v.end();i++)
			cout << *i;
		cout << endl;
	}
	return 0;
}
