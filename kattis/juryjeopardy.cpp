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
	lli n;
	cin >> n;
	cout << n << endl;
	cin.get();
	while(n--)
	{
	  string s;
	  cin >> s;
	  vector<vector<char>> v(201,vector<char>(201,'#'));
	  lli i=100,j=100;
	  char dir='E';
	  v[i][j]='.';
	  for(lli it=0;it<s.size();it++)
	  {
	    if(s[it]=='F')
	    {
	      if(dir=='E')
	        {j++;v[i][j]='.';}
	      else if(dir=='W')
	        {j--;v[i][j]='.';}
	      else if(dir=='N')
	        {i--;v[i][j]='.';}
	      else if(dir=='S')
	        {i++;v[i][j]='.';}
	    }
	    else if(s[it]=='L')
	    {
	      if(dir=='E')
	        dir='N';
	      else if(dir=='N')
	        dir='W';
	      else if(dir=='W')
	        dir='S';
	      else if(dir=='S')
	        dir='E';
	      if(dir=='E')
	        {j++;v[i][j]='.';}
	      else if(dir=='W')
	        {j--;v[i][j]='.';}
	      else if(dir=='N')
	        {i--;v[i][j]='.';}
	      else if(dir=='S')
	        {i++;v[i][j]='.';}
	    }
	    else if(s[it]=='R')
	    {
	      if(dir=='E')
	        dir='S';
	      else if(dir=='N')
	        dir='E';
	      else if(dir=='W')
	        dir='N';
	      else if(dir=='S')
	        dir='W';
	      if(dir=='E')
	        {j++;v[i][j]='.';}
	      else if(dir=='W')
	        {j--;v[i][j]='.';}
	      else if(dir=='N')
	        {i--;v[i][j]='.';}
	      else if(dir=='S')
	        {i++;v[i][j]='.';}
	    }
	    else if(s[it]=='B')
	    {
	      if(dir=='E')
	        dir='W';
	      else if(dir=='N')
	        dir='S';
	      else if(dir=='W')
	        dir='E';
	      else if(dir=='S')
	        dir='N';
	      if(dir=='E')
	        {j++;v[i][j]='.';}
	      else if(dir=='W')
	        {j--;v[i][j]='.';}
	      else if(dir=='N')
	        {i--;v[i][j]='.';}
	      else if(dir=='S')
	        {i++;v[i][j]='.';}
	    }
	  }
	  //print
	  lli imin=5171,imax=-5171,jmin=5171,jmax=-5171;
	  lli check=0;
	  for(lli i=0;i<200;i++)
	  {
	    lli count=0;
	    for(lli j=0;j<200;j++)
	    {
	      if(v[i][j]=='.')
	        {count++;break;}
	    }
	    if(check==0 && count>0)
	      {check=1;imin=i;}
	    if(count>0)
	      imax=i;
	  }
	  imin--;
	  imax++;
	  check=0;
	  for(lli j=0;j<200;j++)
	  {
	    lli count=0;
	    for(lli i=0;i<200;i++)
	    {
	      if(v[i][j]=='.')
	        {count++;break;}
	    }
	    if(check==0 && count>0)
	      {check=1;jmin=j;}
	    if(count>0)
	      jmax=j;
	  }
	  jmax++;
	  cout << imax-imin+1 << " " << jmax-jmin+1 << endl;
	  for(lli i=imin;i<=imax;i++)
	  {
	    for(lli j=jmin;j<=jmax;j++)
	      cout << v[i][j];
	    cout << endl;
	  }
	}
	return 0;
}
