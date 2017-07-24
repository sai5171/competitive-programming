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
	vector<lli> v1,v2;
	for(lli i=s1.size()-1;i>=0;i--)
		v1.pb(s1[i]-48);
	for(lli i=s2.size()-1;i>=0;i--)
		v2.pb(s2[i]-48);
	if(l1<l2)
	{
		lli c=l2-l1;
		while(c--)
			v1.pb(0);
	}
	else if(l1>l2)
	{
		lli c=l1-l2;
		while(c--)
		v2.pb(0);
	}
	l1=v1.size();
	l2=v2.size();
	for(lli i=0;i<v1.size();i++)
	{
		if(v1[i]<v2[i])
		{
			v1[i]=5171;
			l1--;
		}
		else if(v1[i]>v2[i])
		{
			v2[i]=5171;
			l2--;
		}
	}
	if(l1==0)
		cout << "YODA\n";
	else
	{
		lli x=0;
		for(lli i=v1.size()-1;i>=0;i--)
		{
			if(v1[i]!=5171)
				x=x*10+v1[i];
		}
		cout << x << endl;
	}
	if(l2==0)
		cout << "YODA\n";
	else
	{
		lli x=0;
		for(lli i=v2.size()-1;i>=0;i--)
		{
			if(v2[i]!=5171)
				x=x*10+v2[i];
		}
		cout << x << endl;
	}
	return 0;
}
