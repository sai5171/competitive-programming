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
#include <set>
#include <map>
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
	string s;
	while(getline(cin,s))
	{
		vector<long long int> v;
		long long int i,j;
		long long int x;
		long long int sum=0;
		string s1;
		for(i=0,j=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				s1=s.substr(j,i-j);
				j=i+1;
				x=stoll(s1);
				v.pb(x);
				sum+=x;
			}
		}
		s1=s.substr(j,i-j);
		j=i+1;
		x=stoll(s1);
		v.pb(x);
		sum+=x;
		for(auto i=v.begin();i!=v.end();i++)
		{
			if(sum-(*i)==(*i))
				{cout << *i << endl;break;}
		}
	}
	return 0;
}
