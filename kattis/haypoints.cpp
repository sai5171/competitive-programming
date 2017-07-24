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
	lli n,t;
	sflli(n);
	sflli(t);
	map<string,lli> m;
	string s;
	lli x;
	while(n--)
	{
		cin >> s >> x;
		m[s]=x;
	}
	lli count=0;
	lli sum=0;
	while(getline(cin,s))
	{
		if(s==".")
		{
			cout << sum << endl;
			sum=0;
			count++;
		}
		if(count==t)
			break;
		lli i=0,j=0;
		string s1;
		for(;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				s1=s.substr(j,i-j);
				sum+=m[s1];
				j=i+1;
			}
		}
		s1=s.substr(j,i-j);
		sum+=m[s1];
	}
	return 0;
}
