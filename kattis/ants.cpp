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
//end input macros 
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n,m;
		cin >> n >> m;
		vector<long long int> v;
		while(m--)
		{
			long long int x;
			cin >> x;
			v.push_back(x);
		}
		long long int min=-1;
		for(auto i=v.begin();i!=v.end();i++)
		{
			long long int x;
			x=*i<n-*i?*i:n-*i;
			if(min<x)
				min=x;
		}
		long long int max=-1;
		for(auto i=v.begin();i!=v.end();i++)
		{
			long long int x;
			x=*i>n-*i?*i:n-*i;
			if(max<x)
				max=x;
		}
		cout << min << " " << max << endl;
	}
	return 0;
}
