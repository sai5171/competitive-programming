//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define pf push_front
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int prime(lli x,lli y)
{
	vector<lli> v;
	for(lli i=2;i<=sqrt(y);i++)
	{
		lli count=0;
		for(lli j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
				{count=1;break;}
		}
		if(count==0)
			v.pb(i);
	}
	for(lli i=x;i<=y;i++)
	{
		lli count=0;
		for(lli j=0;v[j]<=sqrt(i) && j<v.size();j++)
		{
			if(i%v[j]==0)
				{count=1;break;}
		}
		if(count==0 && i!=1)
			cout << i << "\n";
	}
	return 0;
}
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	lli t;
	cin >> t;
	while(t--)
	{
		lli x,y;
		cin >> x >> y;
		prime(x,y);
		cout << endl;
	}
	return 0;
}
