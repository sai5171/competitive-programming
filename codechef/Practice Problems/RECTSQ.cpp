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
		lli n,m;
		sflli(n);
		sflli(m);	
		lli max=n>m?n:m;
		lli min=n>m?m:n;
		while(max%min!=0)
		{
			lli r=max%min;
			max=min;
			min=r;
		}
		cout << (n*m)/(min*min) << endl;
	}
	return 0;
}
