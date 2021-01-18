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
	vector<vector<lli>> v(4,vector<lli>(4,0));
	for(lli i=0;i<=3;i++)
	{
	  for(lli j=0;j<=3;j++)
	    cin >> v[i][j];
	}
	lli dir;
	cin >> dir;
  vector<vector<lli>> d(4,vector<lli>(4,0));
	if(dir==0)//left
	{
	  for(lli i=0;i<=3;i++)
	  {
	    for(lli j=0;j<=3;j++)
	      d[i][j]=v[i][j];
	  }
	}
	else if(dir==1)//up
	{
	  for(lli j=3,k=0;j>=0;j--,k++)
	  {
	    for(lli i=0,l=0;i<=3;i++,l++)
	    {
	      d[k][l]=v[i][j];
	    }
	  }
	}
  else if(dir==2)//right
	{
	  for(lli i=0,k=0;i<=3;i++,k++)
	  {
	    for(lli j=3,l=0;j>=0;j--,l++)
	    {
	      d[k][l]=v[i][j];
	    }
	  }
	}
	else if(dir==3)//down
	{
	  for(lli j=0,k=0;j<=3;j++,k++)
	  {
	    for(lli i=3,l=0;i>=0;i--,l++)
	    {
	      d[k][l]=v[i][j];
	    }
	  }
	}
	for(lli i=0;i<=3;i++)
	{
	  for(lli j=0;j<=3;j++)
	    v[i][j]=d[i][j];
	}
	//slide operation
	for(lli i=0;i<=3;i++)
	{
	  vector<lli> zr(4,0);
	  for(lli j=0,k=0;j<=3;j++)
	    if(v[i][j]!=0)
	      zr[k++]=v[i][j];
	  for(lli i=1;i<=3;i++)
	  {
	    if(zr[i-1]==0 || zr[i-1]==zr[i])
	    {
	      zr[i-1]+=zr[i];
	      zr.erase(zr.begin()+i);
	      zr.pb(0);
	    }
	  }
	  for(lli j=0;j<=3;j++)
	    v[i][j]=zr[j];
	}
	//print
	if(dir==0)//left
	{
	  for(lli i=0;i<=3;i++)
	  {
	    for(lli j=0;j<=3;j++)
	      d[i][j]=v[i][j];
	  }
    for(lli i=0;i<=3;i++)
    {
      for(lli j=0;j<=3;j++)
        cout << d[i][j] << " ";
      cout << endl;
    }
  }
  else if(dir==1)//up
  {
    for(lli j=0,k=0;j<=3;j++,k++)
	  {
	    for(lli i=3,l=0;i>=0;i--,l++)
	    {
	      d[k][l]=v[i][j];
	    }
	  }
	  for(lli i=0;i<=3;i++)
    {
      for(lli j=0;j<=3;j++)
        cout << d[i][j] << " ";
      cout << endl;
    }
  }
  else if(dir==2)//right
  {
    for(lli i=0,k=0;i<=3;i++,k++)
	  {
	    for(lli j=3,l=0;j>=0;j--,l++)
	    {
	      d[k][l]=v[i][j];
	    }
	  }
	  for(lli i=0;i<=3;i++)
    {
      for(lli j=0;j<=3;j++)
        cout << d[i][j] << " ";
      cout << endl;
    }
  }
  else if(dir==3)//down
  {
    for(lli j=3,k=0;j>=0;j--,k++)
	  {
	    for(lli i=0,l=0;i<=3;i++,l++)
	    {
	      d[k][l]=v[i][j];
	    }
	  }
	  for(lli i=0;i<=3;i++)
    {
      for(lli j=0;j<=3;j++)
        cout << d[i][j] << " ";
      cout << endl;
    }
  }
	return 0;
}
