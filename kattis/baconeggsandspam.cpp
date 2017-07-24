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
	lli n;
	while(cin >> n && n!=0)
	{
		getchar();
		map<string,vector<string>> m;
		string s,name,item;
		while(n--)
		{
			getline(cin,s);
			lli i=0,j=0;
			for(;i<s.size();i++)
			{
				if(s[i]==' ')
				{
					name=s.substr(j,i-j);
					break;
				}
			}
			i=i+1;
			j=i;
			//cout << name << endl;
			for(;i<s.size();i++)
			{
				if(s[i]==' ')
				{
					item=s.substr(j,i-j);
					j=i+1;
					//cout << item ;
					m[item].pb(name);
				}
			}
			item=s.substr(j,i-j);
			j=i+1;
			//cout << item << endl;
			m[item].pb(name);
		}
		for(auto itm=m.begin();itm!=m.end();itm++)
		{
			cout << itm->first << " ";
			sort(itm->second.begin(),itm->second.end());
			for(auto it=itm->second.begin();it!=itm->second.end();it++)
				cout << *it << " ";
			cout << endl;
		}
	}
	
	return 0;
}
