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
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	long long int t;
	cin >> t;
	while(t--)
	{
	  long long int n;
	  cin >> n;
	  vector<long long int> v;
	  long long int max=-1;
	  while(n--)
    {
      long long int x;
      cin >> x;
      v.pb(x);
      if(max<x)
        max=x;
    }
    for(long long int i=max;i>=2;i--)
    {
      long long int count=0;
      for(long long int j=0;j<v.size();j++)
      {
        if(v[j]%i==0)
          count++;
      }
      if(count==v.size())
      {
        for(long long int j=0;j<v.size();j++)
          v[j]=v[j]/i;
      }
    }
    for(long long int j=0;j<v.size();j++)
      cout << v[j] << " " ;
    cout << endl;
	}
	return 0;
}
