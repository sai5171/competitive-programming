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
	long long int r,c;
	cin >> r >> c;
	char a[r][c];
	cin.get();
	for(long long int i=0;i<r;i++)
	{
	  for(long long int j=0;j<c;j++)
	    a[i][j]=cin.get();
	  cin.get();
	}
	long long int count=0;
	long long int i=0,j=0;
	long long int check=0;
	while(1)
  {
    if(check>=1000000)
    {
      cout << "Lost" << endl;
      return 0;
    }
    check++;
    if(a[i][j]=='T')
    {
      cout << count << endl;
      return 0;
    }
    else if(a[i][j]=='N')
      i--;
    else if(a[i][j]=='S')
      i++;
    else if(a[i][j]=='W')
      j--;
    else if(a[i][j]=='E')
      j++;
    count++;
    if(i<0 || j<0 || i>=r || j>=c)
    {
      cout << "Out" << endl;
      return 0;
    } 
  }
	return 0;
}

