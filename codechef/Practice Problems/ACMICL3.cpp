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
		map<string,long long int> m;
		while(n--)
		{
			string s;
			getline(cin,s);
			long long int temp=m[s];
			m[s]=++temp;
		}
		long long int co=0;
		for(auto it=m.begin();it!=m.end();it++)
		{
			if(it->second%2==1)
				co++;
		}
		cout << co << endl;
	}
	return 0;
}
