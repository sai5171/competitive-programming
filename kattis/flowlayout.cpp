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
	lli m;
	while(cin >> m && m!=0)
	{
		lli l=0,b=0;
		lli r=0,c=0;
		lli x,y;
		while(cin >> x >> y && x!=-1 && y!=-1)
		{
			if(r+x<=m)
			{
				r+=x;
				if(c<y)
					c=y;
			}
			else
			{
				if(l<r)
					l=r;
				b+=c;
				r=x;
				c=y;
			}
		}
		if(l<r)
			l=r;
		b+=c;
		cout << l << " x " << b << endl;
	}
	return 0;
}
