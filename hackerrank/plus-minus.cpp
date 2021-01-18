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
	long long int t;
	cin >> t;
	long double p=0,n=0,z=0;
	for(long long int i=0;i<t;i++)
	{
	    long double x;
	    cin >> x;
	    if(x==0)
	        z++;
	    else if(x<0)
	        n++;
	    else
	        p++;
	}
	cout << setprecision (6) << fixed;
	cout << (long double)p/t << endl;
	cout << (long double)n/t << endl;
	cout << (long double)z/t << endl;
	return 0;
}
