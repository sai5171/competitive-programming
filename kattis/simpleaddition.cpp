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
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	lli l1=s1.size();
	lli l2=s2.size();
	vector<int> a,b,c;
	for(lli i=l1-1;i>=0;i--)
		a.pb(s1[i]-48);
	for(lli i=l2-1;i>=0;i--)
		b.pb(s2[i]-48);
	if(l1>l2)
	{
		lli x;
		x=l1-l2;
		while(x--)
			b.pb(0);
	}
	else
	{
		lli x;
		x=l2-l1;
		while(x--)
			a.pb(0);
	}
	l1=(l1>l2)?l1:l2;
	lli carry=0;
	for(lli i=0;i<l1;i++)
	{
		carry=a[i]+b[i]+carry;
		c.pb(carry%10);
		carry=carry/10;
	}
	c.pb(carry%10);
	lli index=0;
	for(lli i=0;i<c.size();i++)
	{
		if(c[i]!=0)
			index=i;
	}
	for(lli i=index;i>=0;i--)
		cout << c[i];
	return 0;
}
