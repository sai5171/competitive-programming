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
	scanf("%lld",&t);
	while(t--)
	{
	  lli x;
	  char temp;
	  lli n=0;
	  vector<lli> v;
	  do
	  {
	    scanf("%lld%c",&x,&temp);
	    v.push_back(x);
	    n++;
	  }while(temp!='\n');
	  n--;
	  for(auto i=v.begin();i!=v.end();i++)
	  {
	    if(*i==n)
	    {
	      *i=-1;
	      break;
	    }
	  }
	  sort(v.begin(),v.end());
	  cout << *(v.end()-1) << endl;
	}
	return 0;
}

