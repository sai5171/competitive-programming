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
	lli t;
	cin >> t;
	while(t--)
	{
	  lli n;
	  cin >> n;
	  vector<lli> a,b;
	  lli temp=n;
	  while(temp--)
	  {
	    lli x;
	    cin >> x;
	    a.pb(x); 
	  }
	  temp=n;
	  while(temp--)
	  {
	    lli x;
	    cin >> x;
	    b.pb(x); 
	  }
	  lli m1=0,m2=0;
	  for(lli i=0;i<n;i++)
	  {
	    if(i%2==0)
	      m1+=a[i];
	    else
  	    m1+=b[i];
	  }
	  for(lli i=0;i<n;i++)
	  {
	    if(i%2==0)
	      m2+=b[i];
	    else
  	    m2+=a[i];
	  }
	  cout << min(m1,m2) << endl;
	}
	return 0;
}

