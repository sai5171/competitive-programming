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
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	vector<vector<long long int>> v(s2.size()+1,vector<long long int>(s1.size()+1,0));
	for(lli i=0;i<v[0].size();i++)
		v[0][i]=i;
	for(lli i=0;i<v.size();i++)
		v[i][0]=i;
	for(lli i=0;i<v.size();i++)
	{
		for(lli j=0;j<v[i].size();j++)
		{
			if(i==0 || j==0)
				continue;
			if(s2[i-1]==s1[j-1])
			{
				v[i][j]=v[i-1][j-1];
			}
			else
			{
				v[i][j]=min(min(v[i-1][j-1],v[i-1][j]),v[i][j-1])+1;
			}
		}
	}
	for(lli i=0;i<v.size();i++)
	{
		for(lli j=0;j<v[i].size();j++)
			cout << v[i][j] << " ";
		cout << endl;
	}
	lli r=0,d=0,i=0;
	for(lli i=s2.size();i>0;)
	{
		for(lli j=s1.size();j>0;)
		{
			if(i==0 || j==0)
				break;
			if(s2[i-1]==s1[j-1])
				{i--;j--;}
			else if(v[i][j]==v[i-1][j-1]+1)
			{
				i--;j--;
				r++;
			}
			else if(v[i][j]==v[i-1][j]+1)
			{
				i--;
				d++;
			}
			else
			{
				j--;
				i++;
			}
		}
	}
	cout << endl;
	cout << "insert:" <<  i <<  " delete:" << d << " replace:" << r << endl;
	return 0;
}
