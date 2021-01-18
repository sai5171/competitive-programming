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
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	getchar();
	while(t--)
	{
		string x,y;
		cin >> x >> y;
		for(long long int i=0;i<x.size();i++)
		{
			if(x[i]=='W' && y[i]=='W')
				cout << "B";
			else if(x[i]=='B' && y[i]=='B')
				cout << "W";
			else 
				cout << "B";
		}
		cout << endl;
	}
	return 0;
}
