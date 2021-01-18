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
	//ofstream fout ("a.ou");
  string s;
  while(getline(cin,s))
  {
    string s1;
    long long int i=0,j=0;
    for(;i<s.size();i++)
    {
      if(s[i]==' ')
      {
        s1=s.substr(j,i-j);
        j=i+1;
        //cout << s1 << " ";
        if(s1[0]=='a' || s1[0]=='e'|| s1[0]=='i' || s1[0]=='o' || s1[0]=='u' || s1[0]=='y')
        {
          s1.append("yay\0");
          cout << s1 << " ";
        }
        else
        {
          vector<char> v;
          lli i=0;
          for(;i<s1.size();i++)
          {
            if(s1[i]=='a' || s1[i]=='e'|| s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='y')
              break;
            v.push_back(s1[i]);
          }
          for(;i<s1.size();i++)
            cout << s1[i];
          for(lli i=0;i<v.size();i++)
            cout << v[i];
          cout << "ay" << " ";
        }
      }
    }
    s1=s.substr(j,i-j);
    //cout << s1 << "\n";
    if(s1[0]=='a' || s1[0]=='e'|| s1[0]=='i' || s1[0]=='o' || s1[0]=='u' || s1[0]=='y')
    {
      s1.append("yay\0");
      cout << s1 << "\n";
    }
    else
    {
      vector<char> v;
      lli i=0;
      for(;i<s1.size();i++)
      {
        if(s1[i]=='a' || s1[i]=='e'|| s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='y')
          break;
        v.push_back(s1[i]);
      }
      for(;i<s1.size();i++)
        cout << s1[i];
      for(lli i=0;i<v.size();i++)
        cout << v[i];
      cout << "ay" << "\n";
    }
  }
	return 0;
}
