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
		string s1,s2;
		cin >> s1 >> s2;
		vector<long long int>a(26,0),b(26,0);
		for(long long int i=0;i<s1.size();i++)
			a[s1[i]-'a']+=1;
		for(long long int i=0;i<s2.size();i++)
			b[s2[i]-'a']+=1;
		long long int check=0;
		for(long long int i=0;i<a.size();i++)
		{
			if(a[i]>0 && b[i]>0)
			{
				check=1;
				break;
			}
		}
		if(check==1)
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
