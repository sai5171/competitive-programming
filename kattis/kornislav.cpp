//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
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
//end input macros 
using namespace std;
int main(){
	vector<long long int> v;
	long long int x;
	cin >> x;
	v.pb(x);
	cin >> x;
	v.pb(x);
	cin >> x;
	v.pb(x);
	cin >> x;
	v.pb(x);
	sort(v.begin(),v.end());
	cout << v[0]*v[2] << endl;
	return 0;
}
