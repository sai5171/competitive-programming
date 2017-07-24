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
	while(n--)
	{
		lli s,d;
		sflli(s);
		sflli(d);
		lli x=abs(s-d)/2;
		lli y=(s+d)/2;
		if(x+y==s && abs(x-y)==d)
			cout << max(x,y) << " " << min(x,y) << endl;
		else
			cout << "impossible\n";
	}
	return 0;
}
