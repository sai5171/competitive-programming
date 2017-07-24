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
	string s;
	string name;
	map<string,set<string >> m;
	map<string,long long int> d;
	vector<pair<string,long long int>> v;
	while(getline(cin,s))
	{
	  if(s=="0")
	    return 0;
	  if(s=="1")
	  {
	    for(auto i=m.begin();i!=m.end();i++)
	    {
	      for(auto j=i->second.begin();j!=i->second.end();j++)
	      {
	        long long int x=d[*j];
          x++;
          d[*j]=x;
	      }
	    }
	    for(auto i=d.begin();i!=d.end();i++)
	    {
	      if(i->first!="3" && i->second>1)
	      {
	        for(auto j=m.begin();j!=m.end();j++)
	        {
	          j->second.erase(i->first);
	        }
	      }
	    }
	    for(auto i=m.begin();i!=m.end();i++)
	    {
	      pair<string,long long int> p;
	      p.first=i->first;
	      p.second=i->second.size()-1;
	      v.pb(p);
	    }
	    sort(v.begin(),v.end(),[](pair<string,long long int> a,pair<string,long long int> b){
	      if(a.second==b.second)
	        return a.first<b.first;
	      else
	      return a.second>b.second;
	    });
	    for(auto i=v.begin();i!=v.end();i++)
	      cout << i->first << " " << i->second << endl;
	    m.clear();
	    d.clear();
	    v.clear();  
	  }
	  else
	  {
	    if(s[0]>='A' && s[0]<='Z')
	    {
	      name=s.substr(0,s.size());
	      m[name].insert("3");
	    }
	    else
	    {  
	      m[name].insert(s);
	    }
	  }
	}
	return 0;
}
