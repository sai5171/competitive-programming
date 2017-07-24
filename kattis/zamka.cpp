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
	lli l,d,x;
	sflli(l);
	sflli(d);
	sflli(x);
	lli min=0,max=0;
	lli count=0;
	for(lli i=l;i<=d;i++)
	{
		lli a=i;
		lli c=0;
		while(a!=0)
		{
			c+=(a%10);
			a=a/10;
		}
		if(c==x)
		{
			if(count==0)
				{min=i;max=i;}
			count++;
			if(count>0)
				max=i;
		}
	}
	cout << min << endl;
	cout << max << endl;
	return 0;
}
