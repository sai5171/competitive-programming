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
	vector<lli> p(14,0),k(14,0),h(14,0),t(14,0);
	string s;
	getline(cin,s);
	for(lli i=0;i<s.size();i=i+3)
	{
		if(s[i]=='P')
		{
			lli x=s[i+1]-48;
			x=x*10+s[i+2]-48;
			++p[x];
		}
		else if(s[i]=='K')
		{
			lli x=s[i+1]-48;
			x=x*10+s[i+2]-48;
			++k[x];
		}
		else if(s[i]=='H')
		{
			lli x=s[i+1]-48;
			x=x*10+s[i+2]-48;

			++h[x];
		}
		else if(s[i]=='T')
		{
			lli x=s[i+1]-48;
			x=x*10+s[i+2]-48;
			++t[x];
		}
	}
	for(lli i=0;i<p.size();i++)
	{
		if(p[i]>1)
		{
			cout << "GRESKA\n";
			return 0;
		}		
	}
	for(lli i=0;i<k.size();i++)
	{
		if(k[i]>1)
		{
			cout << "GRESKA\n";
			return 0;
		}	
	}
	for(lli i=0;i<h.size();i++)
	{
		if(h[i]>1)
		{
			cout << "GRESKA\n";
			return 0;
		}	
	}
	for(lli i=0;i<t.size();i++)
	{
		if(t[i]>1)
		{
			cout << "GRESKA\n";
			return 0;
		}	
	}
	lli max=13;
	for(lli i=0;i<p.size();i++)
			max-=p[i];
	cout << max << " ";
	max=13;
	for(lli i=0;i<k.size();i++)
		max-=k[i];
	cout << max << " ";
	max=13;
	for(lli i=0;i<h.size();i++)
		max-=h[i];
	cout << max << " ";
	max=13;
	for(lli i=0;i<t.size();i++)
		max-=t[i];
	cout << max << endl;
	return 0;
}
