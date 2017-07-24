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
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	vector<vector<long long int> > v(7,vector<long long int>(7,3));
	string s;
	getline(cin,s);
	for(long long int i=0,j=2;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[0][j]=1;j++;}
		else if(s[i]=='.')
			{v[0][j]=0;j++;}
	}
	getline(cin,s);
	for(long long int i=0,j=2;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[1][j]=1;j++;}
		else if(s[i]=='.')
			{v[1][j]=0;j++;}
	}
	getline(cin,s);
	for(long long int i=0,j=0;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[2][j]=1;j++;}
		else if(s[i]=='.')
			{v[2][j]=0;j++;}
	}
	getline(cin,s);
	for(long long int i=0,j=0;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[3][j]=1;j++;}
		else if(s[i]=='.')
			{v[3][j]=0;j++;}
	}
	getline(cin,s);
	for(long long int i=0,j=0;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[4][j]=1;j++;}
		else if(s[i]=='.')
			{v[4][j]=0;j++;}
	}
	getline(cin,s);
	for(long long int i=0,j=2;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[5][j]=1;j++;}
		else if(s[i]=='.')
			{v[5][j]=0;j++;}
	}
	getline(cin,s);
	for(long long int i=0,j=2;i<s.size();i++)
	{
		if(s[i]=='o')
			{v[6][j]=1;j++;}
		else if(s[i]=='.')
			{v[6][j]=0;j++;}
	}
	long long int count=0;
	for(auto i=0;i<v.size();i++)
	{
		for(auto j=0;j<v[i].size();j++)
		{
			if(v[i][j]==0 && i-2>=0 && v[i-1][j]==1 && v[i-2][j]==1)
				count++;
			if(v[i][j]==0 && i+2<=6 && v[i+1][j]==1 && v[i+2][j]==1)
				count++;
			if(v[i][j]==0 && j-2>=0 && v[i][j-1]==1 && v[i][j-2]==1)
				count++;
			if(v[i][j]==0 && j+2<=6 && v[i][j+1]==1 && v[i][j+2]==1)
				count++;
		}
	}
	cout << count << endl;
	return 0;
}
