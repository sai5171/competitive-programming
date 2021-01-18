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
	long long int r,c,zr,zc;
	cin >> r >> c >> zr >> zc;
	cin.get();
	char a[r][c];
	for(long long int i=0;i<r;i++)
	{
	  for(long long int j=0;j<c;j++)
	  {
	    a[i][j]=cin.get();
	  }
	  cin.get();
	}
	char b[r*zr][c*zc];
	for(long long int i=0;i<r;i++)
	{
	  for(long long int j=0;j<c;j++)
	  {
	    long long int x=zr*i;
	    long long int y=zc*j;
	    for(long long int k=0;k<zr;k++)
	    {
	      for(long long int l=0;l<zc;l++)
	      {
	        b[x+k][y+l]=a[i][j];
	      }
	    }
	    
	  }
	}
	for(long long int i=0;i<r*zr;i++)
	{
	  for(long long int j=0;j<c*zc;j++)
	  {
	    cout << b[i][j];
	  }
	  cout << endl;
	}
	return 0;
}

