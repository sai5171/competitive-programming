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
	    vector<long long int> v,b;
	    cin >> n;
	    while(n--)
	    {
	        long long int x;
	        cin >> x;
	        v.pb(x);
	    }
	    n=v.size();
	    while(n--)
	    {
	        long long int x;
	        cin >> x;
	        b.pb(x);
	    }
	    long long int count=0;
	    long long int pre=0;
	    for(long long int i=0;i<v.size();i++)
	    {
	        long long int dif=v[i]-pre;
	        if(dif>=b[i])
	            count++;
	        pre=v[i];
	    }
	    cout << count << endl;
	}
	return 0;
}
