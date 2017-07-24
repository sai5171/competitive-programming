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
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	long long int t;
	cin >> t;
	while(t--)
	{
	  long long int n;
	  cin >> n;
	  cin.get();
	  vector<string> v;
	  while(n--)
	  {
	    string s;
	    getline(cin,s);
	    v.pb(s);
	  }
	  sort(v.begin(),v.end());
	  bool ans=true;
	  for(long long int i=1;i<v.size();i++)
	  {
	    if(v[i].compare(0,v[i-1].size(),v[i-1])==0)
	      ans=false;
	  }
	  if(ans)
	    cout << "YES" << endl;
	  else
	    cout << "NO" << endl;
	}
	return 0;
}
