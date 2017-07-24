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
	long long int n;
	long long int it=1;
	while(cin >> n)
	{
	  cout << "Case " << it << ":" << endl;
	  it++;
	  vector<long long int> v;
	  while(n--)
	  {
	    long long int x;
	    cin >> x;
	    v.pb(x);
	  }
	  sort(v.begin(),v.end());
	  long long int t;
	  cin >> t;
	  while(t--)
	  {
	    long long int x;
	    cin >> x;
	    long long int i=0,j=v.size()-1;
	    vector<long long int> sum;
	    for(;i<j;)
	    {
	      sum.pb(v[i]+v[j]);
	      if(v[i]+v[j]>x)
	        j--;
	      else
	        i++;
	    }
	    long long int ans=5171*5171;
	    for(long long int i=0;i<sum.size();i++)
	    {
	      if(abs(ans-x)>abs(x-sum[i]))
	        ans=sum[i];
	    }
	    cout << "Closest sum to " << x << " is " << ans << "." << endl;
	  }
	}
	return 0;
}
