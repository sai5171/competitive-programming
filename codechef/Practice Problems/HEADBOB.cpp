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
	ios_base::sync_with_stdio(false);
	long long int t;
	cin >> t;
	while(t--)
	{
	  long long int nt;
	  cin >> nt;
	  cin.get();
    string s;
    cin >> s;
    long long int n=0,y=0,in=0;
    for(auto i=s.begin();i!=s.end();i++)
    {
      if(*i=='I')
        in++;
      else if(*i=='Y')
        y++;
      else
        n++;
    }
    if(in>0 && y==0)
      cout << "INDIAN" << endl;
    else if(y>0 && in==0)
      cout << "NOT INDIAN" << endl;
    else
      cout << "NOT SURE" << endl; 
	}
	return 0;
}
