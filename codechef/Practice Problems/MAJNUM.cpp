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
	while(t--)
	{
		long long int n;
		cin >> n;
		map<long long int,long long int> m;
		while(n--)
		{
			long long int x;
			cin >> x;
			long long int temp;
			temp=m[x];
			m[x]=++temp;
		}
		long long int check=0;
		long long int temp=-1;
		for(auto i=m.begin();i!=m.end();i++)
		{
			if(i->second>(m.size()/2.0))
			{
				temp=i->first;
				check=1;
				break;
			}
		}
		if(check==1)
			cout << temp << endl;
		else 
			cout << "NO MAJOR" << endl;
	}
	return 0;
}
