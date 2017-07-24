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
		lli k;
		sflli(k);
		lli temp=n;
		vector<lli> v;
		while(temp--)
		{
			lli x;
			sflli(x);
			v.pb(x);
		}
		sort(v.begin(),v.end());
		lli max=v.size();
		lli count=n-(2*k);
		lli sum=0;
		for(lli i=k;i<max-k;i++)
			sum+=v[i];
		printf("%Lf\n",(long double)sum/count);
	}
	return 0;
}
