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
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	long long int n;
	cin >> n;
	for(long long int it=1;it<=n;it++)
	{
	  cout << "Case #" << it << ": ";
	  cin.get();
	  string a,b,c;
	  cin >> a >> b >> c;
	  vector<long long int> x;
	  for(long long int i=0;i<a.size();i++)
	  {
	    long long int j=0;
	    for(;j<b.size();j++)
	    {
	      if(a[i]==b[j])
	        break;
	    }
	    x.pb(j);
	  }
	  long long int y=0;
	  for(long long int i=0,j=a.size()-1;i<x.size();i++,j--)
	  {
	    y=y+x[i]*pow(b.size(),j);
	  }
	  x.clear();
	  while(y!=0)
	  {
	    x.pb(y%c.size());
	    y=y/c.size();
	  }
	  while(x.size()!=0)
	  {
	    long long int temp=x.back();
	    cout << c[temp];
	    x.pop_back();
	  }
	  cout << endl;
	}
	return 0;
}
