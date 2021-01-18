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
lli pos=0;
//end input macros
using namespace std;
int main(){
	vector<string> b;
	lli n;
	string s,s1;
	getline(cin,s);
	lli i=0,j=0;
	for(;i<s.size();i++)
	{
		if(s[i]==' ')
		{
			s1=s.substr(j,i-j);
			b.pb(s1);
			j=i+1;
		}
	}
	s1=s.substr(j,i-j);
	b.pb(s1);
	cin >> n;
	getchar();
	vector<vector<string> > v(n);
	lli it=0;
	while(n--)
	{
		getline(cin,s);
		i=0,j=0;
		for(;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				s1=s.substr(j,i-j);
				v[it].pb(s1);
				j=i+1;
			}
		}
		s1=s.substr(j,i-j);
		v[it].pb(s1);
		it++;
	}
	//print
	/*
	for(i=0;i<b.size();i++)
		cout << b[i] << " ";
	cout << endl;
	for(i=0;i<v.size();i++)
	{
		for(j=0;j<v[i].size();j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	*/
	//print
	lli t;
	cin >> t;
	getchar();
	while(t--)
	{
		getline(cin,s);
		pos=0;
		for(i=0;i<b.size();i++)
		{
			if(b[i]==s)
				pos=i;
		}
		//cout << pos << endl;
		/*
		stable_sort(v.begin(),v.end(),[](long long int a,long long int b){
			return a>b;
		});
		*/
		
		stable_sort(v.begin(),v.end(),[](vector<string> a,vector<string> b){	
			return a[pos]<b[pos];
		});
		//print
		for(i=0;i<b.size();i++)
			cout << b[i] << " ";
		cout << endl;
		for(i=0;i<v.size();i++)
		{
			for(j=0;j<v[i].size();j++)
				cout << v[i][j] << " ";
			cout << endl;
		}
		cout << endl;
		//print
	}
	return 0;
}
