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
int main()
{
	long double r,x,y;
	while(cin >> r >> x >> y)
	{
		if(x*x+y*y>=r*r)
			cout << "miss\n";
		else
		{	
			long double a;
			a=sqrt(x*x+y*y);
			long double deg;
			deg=acos(a/r)*180.0L/PI;
			deg*=2.0L;
			long double areas;
			areas=(deg/360.0L)*PI*r*r;
			long double base;
			base=sqrt(r*r-a*a);
			base*=2.0L;
			long double areat;
			areat=0.5L*base*a;
			long double min;
			min=areas-areat;
			long double max;
			max=PI*r*r-min;
			cout << setprecision (10) << fixed;
			cout << max << " " << min << endl;
		}
	}
	return 0;
}