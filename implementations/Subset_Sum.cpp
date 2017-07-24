//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
#include <stack>
#include <queue>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define pf push_front
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
/*
	recursive chesetapudu possible cases direct ga print cheyakuadhu better to use vector because for example 14 and the elements are 8 6 4 2
	then 
	8 6
	8 4 2
	but nomal ga print chesukutu veltey only 
	8 4 2
	6
	we will miss 8
*/
vector<lli> print;
set<vector<lli>> s;
int subset(vector<vector<lli>> &val,lli n,lli sum,vector<lli> &v)
{
	if(sum<=0)
	{	
		/*	
		for(lli i=0;i<print.size();i++)
			cout << print[i] << " ";
		cout << endl;
		*/
		s.insert(print);
		return 0;
	}
	if(val[n-1][sum]==1)//not include
	{
	
		subset(val,n-1,sum,v);
	}
	if(sum-v[n-1]>=0 && val[n-1][sum-v[n-1]]==1)//include
	{
		print.pb(v[n-1]);
		subset(val,n-1,sum-v[n-1],v);
		print.pop_back();
	}
}
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	lli n,sum;
	cin >> n >> sum;
	vector<lli> v;
	lli temp=n;
	while(temp--)
	{
		lli x;
		cin >> x;
		v.pb(x);
	}
	sort(v.begin(),v.end());
	vector<vector<lli>> val(n+1,vector<lli>(sum+1,0));
	val[0][0]=1;
	for(lli i=1;i<=n;i++)
	{
		lli x=v[i-1];
		for(lli j=0;j<=sum;j++)
		{
			if(v[i-1]>j)
				val[i][j]=val[i-1][j];
			else
			{
				val[i][j]=max(val[i-1][j],val[i-1][j-v[i-1]]);
			}
		}
	}
	for(lli i=0;i<val.size();i++)
	{
		for(lli j=0;j<val[i].size();j++)
			cout << val[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	if(val[n][sum]==1)
		subset(val,n,sum,v);
	for(auto i=s.begin();i!=s.end();i++)
	{
		vector<lli> v=*i;
		for(auto j=v.begin();j!=v.end();j++)
			cout << *j << " ";
		cout << endl;
	}
	return 0;
}
