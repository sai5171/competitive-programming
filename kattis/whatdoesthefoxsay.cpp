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
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main(){
	long long int t;
	cin >> t;
	int x=getchar();
	while(t--)
	{
		string s,d;
		getline(cin,s);
		vector<string> v,v1;
		long long int i,j;
		for(i=0,j=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				string dup=s.substr(j,i-j);
				j=i+1;
				v.pb(dup);
			}
		}
		string dup=s.substr(j,i-j);
		j=i+1;
		v.pb(dup);
		while(getline(cin,d) && d!="what does the fox say?")
		{
			long long int i;
			for(i=0;d[i]!=' ';i++);
			string dup=d.substr(0,i);
			i=i+6;
			for(j=i;j<d.size();j++);
			string dup1=d.substr(i,j);
			v1.pb(dup1);
		}
		for(long long int i=0;i<v1.size();i++)
		{
			for(long long int j=0;j<v.size();j++)
			{
				if(v1[i]==v[j])
					v.erase(remove(v.begin(),v.end(),v1[i]),v.end());
			}
		}
		for(long long int i=0;i<v.size();i++)
			cout << v[i] << " " ;
		cout << endl;
	}
	return 0;
}
