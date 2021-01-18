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
#include <deque>
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
  long long int n;
  cin >> n;
  long long int x=getchar();
  while(n--)
  {
    string s;
    getline(cin,s);
    vector<char> v;
    for(long long int i=0;i<s.size();i++)
    {
	    if(s[i]=='(')
		    continue;
	    else if(s[i]==')')
	    {
		    cout << v.back();
		    v.pop_back();
	    }
	    else if(s[i]=='+')
		    v.pb(s[i]);
	    else if(s[i]=='-')
		    v.pb(s[i]);
	    else if(s[i]=='*')
		    v.pb(s[i]);
	    else if(s[i]=='/')
		    v.pb(s[i]);
	    else if(s[i]=='^')
		    v.pb(s[i]);
	    else if(s[i]>='a' && s[i]<='z')
		    cout << s[i];
    }
    while(!v.empty())
    {
	    cout << v.back();
	    v.pop_back();
    }
    cout << endl;
  }
  return 0;
}
