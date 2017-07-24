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
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	long long int n;
	cin >> n;
	vector<vector<long long int> > v(n,vector<long long int>(n));
	for(long long int i=0;i<n;i++)
	{
	    for(long long int j=0;j<n;j++)
	    {
	        long long int x;
	        cin >> x;
	        v[i][j]=x;
	    }
	}
	long long int sum1=0;
	for(long long int i=0;i<n;i++)
	    sum1+=v[i][i];
	long long int sum2=0;
	for(long long int i=0;i<n;i++)
	    sum2+=v[i][n-1-i];
	cout << abs(sum1-sum2) << endl;
}
