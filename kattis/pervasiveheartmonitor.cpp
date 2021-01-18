//header macros
#include <stdio.h>
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
	vector<string> name;
	string s;
	long long int x;
	double val;
	while(getline(cin,s))
	{
		name.clear();
		val=0;
		x=0;
		long long int i=0,j=0;
		for(i=0;s[i]!='\0';i++)
		{
			string s1;
			if(s[i]==' ')
			{
				s1=s.substr(j,i-j);
				j=i+1;
				if(s1[0]>='0' && s1[0]<='9')
				{
					x++;
					val+=stod(s1);
				}
				else
					name.pb(s1);
			}
		}
		string s1;
		s1=s.substr(j,i-j);
		if(s1[0]>='0' && s1[0]<='9')
		{
			x++;
			val+=stod(s1);
		}
		else
			name.pb(s1);
		cout << val/x << " ";
		for(auto i=name.begin();i!=name.end();i++)
			cout << *i << " ";
		cout << endl;
	}
	return 0;
}
