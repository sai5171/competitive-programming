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
	string s;
	sflli(n);
	getline(cin,s);
	lli max=(pow(2,n+1)-1);
	lli l=1,r=2;
	for(lli i=0;i<s.size();i++)
	{
		if(s[i]=='L')
		{
			max=max-l;
			r=l+r;
			l=l*2;
		}
		else if(s[i]=='R')
		{
			max=max-r;
			l=r+l;
			r=r*2;
		}
	}
	cout << max << endl;
	return 0;
}
