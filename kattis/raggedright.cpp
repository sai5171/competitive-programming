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
int main(){
	//ifstream fin ("a.in");
	ofstream fout ("a.ou");
	string s;
	vector<string> v;
	vector<int> a;
	int l=0;
	while(getline(cin,s))
	{
		v.pb(s);
		a.pb(s.size());
	}
	auto max=max_element(a.begin(),a.end());
	int ans=0;
	for(int i=0;i<a.size()-1;i++)
	{
		ans+=pow(*max-a[i],2);	
	}	
	cout << ans;
	return 0;
}
