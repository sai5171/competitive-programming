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
	for(long long int it=1;it<=t;it++)
	{
	  cout << "Recipe # " << it << endl;
	  vector<tuple<string,double,double>> v;
	  long long int n,g,d;
	  cin >> n >> g >> d;
	  double scale=(double)d/(double)g;
	  double maini;
	  while(n--)
	  {
	    tuple<string,double,double> t;
	    string s;
	    double x,y;
	    cin >> get<0>(t) >> get<1>(t) >> get<2>(t);
	    cout << get<0>(t) << get<1>(t) >> get<2>(t);
	    //cin >> s >> x >> y;
	    //get<0>(t)=s;
	    //get<1>(t)=x;
	    //get<2>(t)=y;
	    if(get<2>(t)==100.0)
	      maini=x*scale;
	    v.pb(t);
	  }
	  for(long long int i=0;i<v.size();i++)
	  {
	    tuple<string,double,double> t=v[i];
	    double x=maini*get<2>(t)/100.0;
	    cout << setprecision (1) << fixed;
	    cout << get<0>(t) << " " << x  << endl;
	  }
	  cout << "----------------------------------------" << endl;
	}
	return 0;
}
