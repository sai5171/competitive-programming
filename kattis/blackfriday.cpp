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
	sflli(n);
	vector<lli> v,s;
	lli temp=n;
	while(temp--)
	{
		lli x;
		sflli(x);
		v.pb(x);
		s.pb(x);
	}
	lli max=-5171;
	sort(s.begin(),s.end(),[](lli x,lli y){return x>y;});
	for(lli i=0;i<s.size();i++)
	{
		int count=0;
		if(i-1>=0 && s[i-1]==s[i])
			count++;
		if(i+1<s.size() && s[i+1]==s[i])
			count++;
		if(count==0)
		{
			max=s[i];
			break;
		}
	}
	if(max==-5171)
	{
		cout << "none\n";
		return 0;
	}
	for(lli i=0;i<v.size();i++)
	{
		if(v[i]==max)
		{
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}
