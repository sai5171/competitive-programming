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
		vector<long long int> v;
		cin >> n;
		long long int max=0;
		while(n--)
		{
			long long int x;
			cin >> x;
			max+=x;
			v.pb(x);
		}
		long long int check=0;
		long long int sum=v[0];
		long long int temp=-1;
		for(long long int i=1;i<v.size()-1;i++)
		{
			if(max-v[i]-sum==sum)
			{
				check=1;
				temp=v[i];
				break;
			}
			sum+=v[i];
		}
		if(check==1)
		{
			cout << temp << endl;
		}
		else
		{
			cout << "NO EQUILIBRIUM" << endl;
		}
	}
	return 0;
}
