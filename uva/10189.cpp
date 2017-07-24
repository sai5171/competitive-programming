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
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ou");
	long long int n,m;
	long long int t=0;
	long long int count_for_slash_n =0;
	while(cin >> n >> m && n!=0 && m!=0)
	{
		t++;
		if(count_for_slash_n==0)
		    cout << "Field #" << t << ":\n";
	    else
	        cout << "\nField #" << t << ":\n";
	   count_for_slash_n++;
		vector<vector<long long int> > v(n+2,vector<long long int>(m+2,0));
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=1;j<=m;j++)
			{
				char x;
				cin >> x;
				if(x=='*')
					v[i][j]=5171;
			}
		}
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=1;j<=m;j++)
			{
				if(v[i][j]==5171)
					continue;
				long long int count=0;
				if(v[i-1][j-1]==5171)
					count++;
				if(v[i-1][j]==5171)
					count++;
				if(v[i-1][j+1]==5171)
					count++;
				if(v[i][j-1]==5171)
					count++;
				if(v[i][j]==5171)
					count++;
				if(v[i][j+1]==5171)
					count++;
				if(v[i+1][j-1]==5171)
					count++;
				if(v[i+1][j]==5171)
					count++;
				if(v[i+1][j+1]==5171)
					count++;
				v[i][j]=count;
			}
		}
		for(long long int i=1;i<=n;i++)
		{
			for(long long int j=1;j<=m;j++)
			{
				if(v[i][j]==5171)
					cout << "*";
				else
					cout << v[i][j];
			}
			cout << endl;
		}
		//cout << endl;
	}
	return 0;
}
