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
	lli t;
	sflli(t);
	while(t--)
	{
		lli n;
		sflli(n);
		vector<lli > v;
		while(n--)
		{
			lli x;
			sflli(x);
			v.pb(x);
		}
		sort(v.begin(),v.end());
		lli min=1000000000;
		for(auto it=v.begin()+1;it!=v.end();it++)
		{
			if(*it-*(it-1)<min)
				min=*it-*(it-1);
		}
		cout << min << endl;
	}
	return 0;
}
