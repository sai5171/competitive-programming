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
	lli n,s,r;
	sflli(n);
	sflli(s);
	sflli(r);
	vector<lli> v(n,0);
	while(s--)
	{
		lli x;
		sflli(x);
		v[x-1]+=-1;
	}
	while(r--)
	{
		lli x;
		sflli(x);
		v[x-1]+=+1;
	}
	for(auto i=0;i<v.size();i++)
	{
		if(v[i]==1)
		{
			if(i-1>=0 && v[i-1]==-1)
			{
				v[i]--;
				v[i-1]++;
			}
			else if(i+1>=0 && v[i+1]==-1)
			{
				v[i]--;
				v[i+1]++;
			}
		}
	}
	lli c=0;
	for(auto i=v.begin();i!=v.end();i++)
		if(*i==-1)
			c++;
	cout << c << endl;
	return 0;
}
