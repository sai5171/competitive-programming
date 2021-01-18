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
	lli n;
	cin >> n;
	vector<pair<lli,lli>> v;
	while(n--)
	{
	  pair<lli,lli> p;
	  cin >> p.first >> p.second;
	  v.pb(p);
	}
	sort(v.begin(),v.end(),[](pair<lli,lli> a,pair<lli,lli> b){
	  if(a.second!=b.second)
	    return a.second<b.second;
	  return a.first<b.first;
	});
	lli rooms=0;
	lli maxn=-1;
	for(lli i=0;i<v.size();i++)
	{
	  if(maxn<v[i].first)
	  {
	    rooms++;
	    maxn=v[i].second;
	  }
	}
	cout << rooms << endl;
	return 0;
}
