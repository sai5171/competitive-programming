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
	//ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	lli t;
	cin >> t;
	while(t--)
	{
	  lli n;
	  cin >> n;
	  double ang=0;
	  double x=0,y=0;
	  while(n--)
	  {
	    double deg,dis;
	    cin >> deg >> dis;
	    ang+=deg;
	    x+=dis*sin(-ang*M_PI/180.0);
	    y+=dis*cos(-ang*M_PI/180.0);
	  }
	  cout << setprecision (10) << fixed;
	  cout << x << " " << y << endl;
	}
	return 0;
}
