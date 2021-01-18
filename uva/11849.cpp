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
	lli n,m;
	while(cin >> n >> m && n!=0 && m!=0)
	{
		vector<lli> v1,v2;
		while(n--)
		{
			lli x;
			cin >> x;
			v1.pb(x);
		}
		while(m--)
		{
			lli x;
			cin >> x;
			v2.pb(x);
		}
		lli count=0;
		for(lli i=0,j=0;i<v1.size() && j<v2.size();)
		{
			if(v1[i]==v2[j])
			{
				count++;
				i++;
				j++;
			}
			else if(v1[i]<v2[j])
			{
				i++;
			}
			else 
			{
				j++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
