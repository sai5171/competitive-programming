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
int main(){
	string s;
	getline(cin,s);
	long long int c=0;
	for(long long int i=s.size();i>=0;i--)
	{
		if(s[i]=='<')
		{
			c++;
			s[i]='@';
		}
		else
		{
			if(c>0)
			{
				c--;
				s[i]='@';
			}
			else
				;
		}
	}
	for(long long int i=0;i<s.size();i++)
	{
		if(s[i]!='@')
			cout << s[i];
	}
	cout << endl;
}
