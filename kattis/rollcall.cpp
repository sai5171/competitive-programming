//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	vector<tuple<string,string>> v;
	string s1,s2;
	while(cin >> s1 >> s2)
	{
	  tuple<string,string> t;
	  get<0>(t)=s1;
	  get<1>(t)=s2;
	  v.pb(t);
	}
	sort(v.begin(),v.end(),[](tuple<string,string> a,tuple<string,string> b){
	  if(get<1>(a)==get<1>(b))
	    return get<0>(a)<get<0>(b);
	  else
	    return get<1>(a)<get<1>(b);
	});
	map<string,long long int> m;
	for(long long int i=0;i<v.size();i++)
	{
	  tuple<string,string> t=v[i];
	  s1=get<0>(t);
	  s2=get<1>(t);
	  long long int x=m[s1];
	  x++;
	  m[s1]=x;
	}
	for(long long int i=0;i<v.size();i++)
	{
	  tuple<string,string> t=v[i];
	  s1=get<0>(t);
	  s2=get<1>(t);
	  auto it=m.find(s1);
	  if(it->second>1)
  	  cout << s1 << " " << s2 << endl;
  	else
  	  cout << s1 << endl;
	}
	return 0;
}
