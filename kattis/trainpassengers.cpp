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
	long long int c,n;
	cin >> c >> n;
	long long int passengers_c=0;
	vector<vector<long long int>> v(n,vector<long long int>(3));
	for(long long int i=0;i<n;i++)
	{
		long long int x,y,z;
		cin >> x >> y >> z;
		v[i][0]=x;
		v[i][1]=y;
		v[i][2]=z;
	}
	if(v[0][0]!=0 && v[n-1][1]!=0 && v[n-2][2]!=0)
	{
		cout << "impossible\n";
		return 0;
	}
	for(long long int i=0;i<n;i++)
	{
		passengers_c=passengers_c-v[i][0];
		if(passengers_c<0)
		{
			cout << "impossible\n";
			return 0;
		}
		passengers_c=passengers_c+v[i][1];
		if(passengers_c>c)
		{
			cout << "impossible\n";
			return 0;
		}
		if(v[i][2]>0 && passengers_c<c)
		{
			cout << "impossible\n";
			return 0;
		}
	}
	if(passengers_c>0)
	{
		cout << "impossible\n";
		return 0;
	}
	cout << "possible\n";
	return 0;
}
