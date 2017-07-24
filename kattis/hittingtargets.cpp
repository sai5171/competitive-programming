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
	vector< vector<long long int>  > r,c;
	long long int m;
	cin >> m;
	long long int i=0,j=0;
	while(m--)
	{
		string s;
		cin >> s;
		if(s.compare("rectangle")==0)
		{
			long long int w,x,y,z;
			cin >> w >> x >> y >> z;
			vector<long long int> dummy;
			dummy.pb(w);
			dummy.pb(x);
			dummy.pb(y);
			dummy.pb(z);
			r.pb(dummy);
		}
		else
		{
			long long int x,y,z;
			cin >> x >> y >> z;
			vector<long long int> dummy;
			dummy.pb(x);
			dummy.pb(y);
			dummy.pb(z);
			c.pb(dummy);
		}
	}
	long long int n;
	cin >> n;
	while(n--)
	{
		long long int x,y;
		cin >> x >> y;
		long long int count=0;
		for(long long int i=0;i<r.size();i++)
		{
			long long int x1,y1,x2,y2;
			x1=r[i][0];
			y1=r[i][1];
			x2=r[i][2];
			y2=r[i][3];
			if(x1<=x && y1<=y && x<=x2 && y<=y2)
				count++;
		}
		for(long long int i=0;i<c.size();i++)
		{
			long long int x1,y1,rad;
			x1=c[i][0];
			y1=c[i][1];
			rad=c[i][2];
			if(sqrt(pow(abs(x-x1),2)+pow(abs(y-y1),2))<=rad)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}	