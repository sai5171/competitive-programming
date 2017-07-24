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
//end input macros 
using namespace std;
int main(){
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		getchar();
		vector<long long int > v(3);
		string s;
		getline(cin,s);
		for(long long int i=0;i<s.size();i++)
		{
			if(s[i]=='R')
				v[0]++;
			else if(s[i]=='G')
				v[1]++;
			else
				v[2]++;
		}
		sort(v.begin(),v.end());
		cout << n-v[2] << endl;
	}
	return 0;
}
