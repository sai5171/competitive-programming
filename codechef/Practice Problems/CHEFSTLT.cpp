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
		string s1,s2;
		getline(cin,s1);
		getline(cin,s2);
		lli min=0;
		lli max=0;
		for(lli i=0;i<s1.size();i++)
		{
			if(s1[i]!='?' && s2[i]!='?' && s1[i]!=s2[i])
				min++;
			if(s1[i]=='?' || s2[i]=='?')
				max++;
		}
		cout << min << " " << min+max << endl;
	}
	return 0;
}
