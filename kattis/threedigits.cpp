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
	long long int tc=0;
	long long int fc=0;
	cin >> n;
	long long int fact=1;
	for(long long int i=1;i<=n;i++)
	{
	  long long int x=i;
	  while(x%2==0 || x%5==0)
	  {
	    while(x%2==0)
	    {x=x/2;tc++;}
	    while(x%5==0)
	    {x=x/5;fc++;}
	  }
	  fact=fact*x%1000;
	}
  tc=abs(fc-tc);
  while(tc--)
    fact=fact*2%1000;
  if(n<7)
    cout << fact%1000 << endl;
  else
  {
    long long int x=fact%10;
    fact=fact/10;
    long long int y=fact%10;
    fact=fact/10;
    long long int z=fact%10;
    cout << z << y << x << endl;
  }
	return 0;
}
