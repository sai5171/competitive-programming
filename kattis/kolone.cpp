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
//end input macros 
using namespace std;
int main(){
    long long int n,m;
	cin >> n >> m;
	long long int x=getchar();
	vector<char> v;
	vector<long long int> d;
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	long long int t;
	cin >> t;
	long long int len=s1.size();
	for(long long int i=len-1;i>=0;i--)
	{
		v.pb(s1[i]);
		d.pb(+1);
	}
	for(long long int i=0;i<s2.size();i++)
	{
		v.pb(s2[i]);
		d.pb(-1);
	}
	for(long long int i=0;i<t;i++)
	{
		for(long long int j=0;j<v.size()-1;j++)
		{
			if(d[j]==+1 && d[j+1]==-1)
			{
				x=d[j];
				d[j]=d[j+1];
				d[j+1]=x;
				char c;
				c=v[j];
				v[j]=v[j+1];
				v[j+1]=c;
				j++;
			}
		}
	}
	for(auto i=v.begin();i!=v.end();i++)
		cout << *i ;
	cout << endl;
    return 0;
}