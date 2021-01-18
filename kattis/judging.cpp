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
	long long int n;
	cin >> n;
	long long int x=getchar();
	map<string,long long int> m1,m2;
	long long int temp=n;
	while(temp--)
	{
		string s;
		getline(cin,s);
		x=m1[s];
		x++;
		m1[s]=x;
	}
	temp=n;
	while(temp--)
	{
		string s;
		getline(cin,s);
		x=m2[s];
		x++;
		m2[s]=x;
	}
	long long int count=0;
	for(auto i=m1.begin(),j=m2.begin();i!=m1.end() || j!=m2.end();)
	{
		if(i->first==j->first)
		{
			if(i->second>j->second)
				count+=j->second;
			else
				count+=i->second;
			i++;
			j++;
		}
		else if(i->first.compare(j->first)<0)
			i++;
		else if(i->first.compare(j->first)>0)
			j++;
		if(i==m1.end() || j==m2.end())
			break;
	}
	cout << count << endl;
	return 0;
}
