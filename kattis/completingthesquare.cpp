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
	long long int x1,y1,x2,y2,x3,y3,x4,y4;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
  long double d1,d2,d3;
  d1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  d2=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
  d3=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
  if(d1==d2)//1-3
  {
    long double mx,my;
    mx=(x1+x3)/2.0;
    my=(y1+y3)/2.0;
    cout << (2.0*mx)-x2 << " " << (2.0*my)-y2 << endl; 
  }
  else if(d2==d3)//1-2
  {
    long double mx,my;
    mx=(x1+x2)/2.0;
    my=(y1+y2)/2.0;
    cout << (2.0*mx)-x3 << " " << (2.0*my)-y3 << endl; 
  }
  else//2-3
  {
    long double mx,my;
    mx=(x2+x3)/2.0;
    my=(y2+y3)/2.0;
    cout << (2.0*mx)-x1 << " " << (2.0*my)-y1 << endl; 
  }
	return 0;
}

