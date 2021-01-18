//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <climits>
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
	long long int t;
	cin >> t;
	while(t--)
	{
	  long long int n;
	  cin >> n;
	  long double area=0;
	  long long int x1,y1,x2,y2,x3,y3;
	  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	  area+=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	  n=n-3;
	  while(n--)
	  {
	    long long int x,y;
	    cin >> x >> y;
	    x2=x3;
	    y2=y3;
	    x3=x;
	    y3=y;
	    area+=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	  }
	  cout << area << endl;
	}
	return 0;
}
