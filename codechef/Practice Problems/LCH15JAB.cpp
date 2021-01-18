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
int main(){
	lli t;
	sflli(t);
	getchar();
	while(t--)
	{
		string s;
		getline(cin,s);
		lli a[26]={0};
		for(lli i=0;i<s.size();i++)
			a[s[i]-'a']++;
		lli sum=0;
		for(lli i=0;i<26;i++)
			sum+=a[i];
		lli count=0;
		for(lli i=0;i<26;i++)
		{
			if(sum-a[i]==a[i])
			{
				count=1;
				break;
			}
		}
		if(count==1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
