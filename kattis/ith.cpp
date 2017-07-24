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
	long long int n,m,t;
	while(cin >> n >> m >> t)
	{
	  if(n==0 && m==0 && t==0)
	    break;
	  vector<bool> r(n),c(m),d1(n+m-1),d2(n+m-1);
	  for(long long int i=0;i<r.size();i++)
	    r[i]=false;
	  for(long long int i=0;i<c.size();i++)
	    c[i]=false;
	  for(long long int i=0;i<d1.size();i++)
	    d1[i]=false;
	  for(long long int i=0;i<d2.size();i++)
	    d2[i]=false;
	  while(t--)
	  {
	    long long int x,y;
	    cin >> x >> y;
	    x--;
	    y--;
	    r[x]=true;
	    c[y]=true;
	    if(x-y>=0)
	      d1[x-y]=true;
	    else
	      d1[n-1+y-x]=true;
	    d2[x+y]=true;
	  }
	  long long int count=0;
	  for(long long int i=0;i<n;i++)
	  {
	    for(long long int j=0;j<m;j++)
	    {
	      if(r[i]==true)
	        continue;
	      if(c[j]==true)
	        continue;   
	      if(i-j>=0 && d1[i-j]==true)
	        continue;
	      if(i-j<0 && d1[n-1+j-i]==true)
	        continue;
	      if(d2[i+j]==true)
	        continue;
	      count++;
	    }
	  }
	  cout << count << endl;
	}
	return 0;
}
