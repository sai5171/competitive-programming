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
//end header macros
//input macros
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define si(n) scanf("%d",&n);
//end input macros 
using namespace std;
int main()
{
	//ifstream fin ("a.in");
	string s;
	vector<string> v1;
	set<string> s1;
	while(cin >> s)
	{
		v1.pb(s);
	}
	for(auto i=0;i<v1.size();i++)
	{
		for(auto j=0;j<v1.size();j++)
		{
			if(i!=j)
			s1.insert(v1[i]+v1[j]);
		}
	}
	for(auto i=s1.begin();i!=s1.end();i++)
		cout << *i << endl;
	return 0;
}
