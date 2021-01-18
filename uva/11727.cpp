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
	long long int n;
	cin >> n;
	for(long long int i=1;i<=n;i++)
	{
		long long int x,y,z;
		cin >> x >> y >> z;
		cout << "Case " << i << ": ";
		if(x>min(y,z) && x<max(y,z))
			cout << x << endl;
		else if(y>min(x,z) && y<max(x,z))
			cout << y << endl;
		else
			cout << z << endl;
	}
	return 0;
}
