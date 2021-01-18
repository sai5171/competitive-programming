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
	  lli temp=n;
	  vector<lli> v;
	  while(temp--)
	  {
	    lli x;
	    cin >> x;
	    v.pb(x);
	  }
	  sort(v.begin(),v.end(),[](lli a,lli b){
	    return a<b;
	  });
	  if(n==3)
	  {
	    if(v[1]-v[0]!=1 && v[2]-v[1]!=1)
	      cout << v[1] << endl;
	    else if(v[2]-v[1]==1)
	      cout << v[0] << endl;
	    else
	      cout << v[2] << endl;
	  }
	  else
	  {
	    if((v[1]-v[0])!=1)
	    {
	      cout << v[0] << endl;
	      continue;
	    }
	    if((v[v.size()-1]-v[v.size()-2])!=1)
	    {
	      cout << v[v.size()-1] << endl;
	      continue;
	    }
      for(auto i=1;i<v.size()-1;i++)
      {
        if(v[i]-v[i-1]!=1 || v[i+1]-v[i]!=1)
        {
          cout << v[i] << endl;
          break;
        }
      }
    }
	}
	return 0;
}

