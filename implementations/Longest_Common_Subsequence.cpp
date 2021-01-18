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
string s1,s2;
void fun(vector<vector<long long int>> &v,vector<char> &ans,lli i,lli j)
{
	if(i==0 && j==0)
		return ;
	if(i-1<0 && j-1<0)
		return ;
	if(s2[i-1]==s1[j-1])
	{
		//cout << s2[i-1];
		ans.pb(s2[i-1]);
		fun(v,ans,i-1,j-1);
	}	
	else
	{
		if(v[i-1][j]>v[i][j-1])
		{
			fun(v,ans,i-1,j);
		}
		else
			fun(v,ans,i,j-1);
	}
}
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	getline(cin,s1);
	getline(cin,s2);
	vector<vector<long long int>> v(s2.size()+1,vector<long long int>(s1.size()+1,0));
	for(lli j=0;j<=s1.size();j++)
		v[0][j]=0;
	for(lli i=0;i<=s2.size();i++)
		v[i][0]=0;
	for(lli i=1;i<=s2.size();i++)
	{
		for(lli j=1;j<=s1.size();j++)
		{
			if(s2[i-1]==s1[j-1])
				v[i][j]=1+v[i-1][j-1];
			else
				v[i][j]=max(v[i-1][j],v[i][j-1]);
		}
	}
	for(lli i=0;i<=s2.size();i++)
	{
		for(lli j=0;j<=s1.size();j++)
		{
			cout << v[i][j];
		}
		cout << endl;
	}
	vector<char> ans;
	fun(v,ans,s2.size(),s1.size());
	for(auto i=ans.rbegin();i!=ans.rend();i++)
		cout << *i;
	cout << endl;
	return 0;
}
