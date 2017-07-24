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
	//ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	string s;
	while(getline(cin,s) && s!="-")
	{
	  double fat=0,tot=0;
	  do
	  {
	    vector<double> v;
	    v.pb(9);
	    v.pb(4);
	    v.pb(4);
	    v.pb(4);
	    v.pb(7);
	    lli it=0;
	    lli d=0;
	    for(lli i=0;i<s.size();)
	    {
	      if(s[i]>='0' && s[i]<='9')
	      {
	          d=d*10+s[i]-48;
	          i++;
	      }
	      else if(s[i]=='g')
	      {
	        v[it]=v[it]*(double)d;
	        it++;
	        i+=2;
	        d=0;
	      }
	      else if(s[i]=='C')
        {
          v[it]=(double)d;
          it++;
          i+=2;
          d=0;
        }
	      else if(s[i]=='%')
	      {
	        v[it]=(double)d/100.0;
	        it++;
	        i+=2;
	        d=0;
	      }
	    }
	    double x=0.0;
	    double y=0;
	    for(auto i=0;i<v.size();i++)
	    {
	      if(v[i]<1)
	        x+=v[i];
	      else
	        y+=v[i];
	    }
	    x=1.0-x;
	    x=y/x;
	    y=0;
	    for(auto i=0;i<v.size();i++)
	    {
	      if(v[i]<1)
	        v[i]=v[i]*x;
	      y+=v[i];
	    }
	    fat+=v[0];
	    tot+=y;
	  }while(getline(cin,s) && s!="-");
	  cout << round(fat/tot*100.0) << "%" << endl;
	}
	return 0;
}
