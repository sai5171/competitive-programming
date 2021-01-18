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
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ou");
	long long int t;
	while(cin >> t && t!=0)
	{
		long long int n,m;
		cin >> n >> m;
		while(t--)
		{
			long long int x,y;
			cin >> x >> y;
			x=x-n;
			y=y-m;
			if(x==0 || y==0)
				cout << "divisa\n";
			else if(x>0 && y>0)
				cout << "NE\n";
			else if(x<0 && y>0)
				cout << "NO\n";
			else if(x<0 && y<0)
				cout << "SO\n";
			else
				cout << "SE\n";
		}
	}
	return 0;
}
