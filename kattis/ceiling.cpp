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
	long long int t,n;
	cin >> t >> n;
	vector<vector<long long int>> v;
	while(t--)
	{
	  long long int temp=n;
	  vector<long long int> dummy(pow(2,n),0);
	  while(temp--)
	  {
	    long long int x;
	    cin >> x;
	    long long int i=1;
	    while(dummy[i]!=0)
	    {
	      if(dummy[i]>x)
	        i=i*2;
	      else
	        i=(i*2)+1;
	    }
	    dummy[i]=x;
	  }
	  v.pb(dummy);
	}
	for(long long int i=0;i<v.size();i++)
	{
	  long long int num=3;
	  for(long long int j=0;j<v[i].size();j++,num=num*3)
	  {
	    if(v[i][j]!=0)
	      v[i][j]=num;
	  }
	}
	set<long long int> s;
	for(long long int i=0;i<v.size();i++)
	{
    long long int sum=0;
	  for(long long int j=0;j<v[i].size();j++)
	  {
	    if(v[i][j]!=0)
	      sum+=v[i][j];
	  }
	  s.insert(sum);
	}
	cout << s.size() << endl;
	return 0;
}
