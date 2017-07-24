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
	  cin.get();
	  vector<string> v;
	  while(n--)
	  {
	    string s;
	    cin >> s;
	    v.pb(s);
	  }
	  lli check=1;
	  for(lli i=0;i<v.size();i++)
	  {
	    if(v[i]=="milk")
	      continue;
	    else if(v[i]=="cookie" && i+1<v.size() && v[i+1]=="milk")
        ;
	    else
	    {
	      check=0;
	      break;
	    }
	  }
	  if(check==1)
	    cout << "YES" << endl;
	  else
	    cout << "NO" << endl;
	}
	return 0;
}

