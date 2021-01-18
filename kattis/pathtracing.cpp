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
	vector<vector<long long int>> v(10000,vector<long long int>(10000,-1));
	long long int i=5000,j=5000;
	long long int imax=5000,imin=5000,jmax=5000,jmin=5000;
	string s;
	while(cin >> s)
	{
		if(s.compare("left")==0)
		{
			j--;
			if(j<jmin)
				jmin=j;
			v[i][j]=3;
		}
		else if(s.compare("right")==0)
		{
			j++;
			if(j>jmax)
				jmax=j;
			v[i][j]=3;
		}
		else if(s.compare("up")==0)
		{
			i--;
			if(i<imin)
				imin=i;
			v[i][j]=3;
		}
		else if(s.compare("down")==0)
		{
			i++;
			if(i>imax)
				imax=i;
			v[i][j]=3;
		}
	}
	v[5000][5000]=5171;
	v[i][j]=-5171;
	//cout << imin << " " << imax << " " << jmin << " " << jmax << endl;
	for(long long int i=imin-1;i<=imax+1;i++)
	{
		for(long long int j=jmin-1;j<=jmax+1;j++)
		{
			if(v[i][j]==-5171)
				cout << "E";
			else if(v[i][j]==5171)
				cout << "S";
			else if(v[i][j]==3)
				cout << "*";
			else if(v[i][j]==-1 && (i==imin-1 || i==imax+1 || j==jmin-1 || j==jmax+1))
				cout << "#";
			else if(v[i][j]==-1)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}
