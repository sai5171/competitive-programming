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
	string s1,s2;
	while(cin >> s1 >> s2)
	{
		if(!s1.compare("0") && !s2.compare("0"))
			break;
		long long int r=2+7+4*(s2.size()-1);
		long long int c=2+7+4*(s1.size()-1);
		char a[r][c];
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
			{
				if((i==0 && j==0)||(i==0 && j==c-1)||(i==r-1 && j==0)||(i==r-1&& j==c-1))
					a[i][j]='+';
				else if(j==0 || j==c-1)
					a[i][j]='|';
				else if(i==0 || i==r-1)
				a[i][j]='-';
				else
					a[i][j]=' ';
			}
		}
		for(int i=4,j=0;i<c && j<s1.size();i+=4,j++)
			a[1][i]=s1[j];
		for(int i=4,j=0;i<r && j<s2.size();i+=4,j++)
			a[i][c-2]=s2[j];
		for(int i=4;i<r-4;i+=4)
		{
			for(int j=4;j<c-4;j+=4)
			{
				a[i-2][j-2]='+';
				a[i-2][j-1]='-';
				a[i-2][j]='-';
				a[i-2][j+1]='-';
				a[i-2][j+2]='+';
				
				a[i-1][j-2]='|';
				a[i-1][j-1]='0'+((int)(s2[i/4-1]-48)*(int)(s1[j/4-1]-48)/10);
				a[i-1][j]=' ';
				a[i-1][j+1]='/';
				a[i-1][j+2]='|';
				
				a[i][j-2]='|';
				a[i][j-1]=' ';
				a[i][j]='/';
				a[i][j+1]=' ';
				a[i][j+2]='|';
				
				a[i+1][j-2]='|';
				a[i+1][j-1]='/';
				a[i+1][j]=' ';
				a[i+1][j+1]='0'+((int)(s2[i/4-1]-48)*(int)(s1[j/4-1]-48)%10);
				a[i+1][j+2]='|';
				
				a[i+2][j-2]='+';
				a[i+2][j-1]='-';
				a[i+2][j]='-';
				a[i+2][j+1]='-';
				a[i+2][j+2]='+';
			}
		}
		long long int x=stoll(s1)*stoll(s2);
		long long int i=r-2,j=c-6;
		int dir=-1;
		while(x!=0)
		{
			if(dir==-1)
			{
				a[i][j]='0'+(x%10);
				x=x/10;
				if(x!=0)
					a[i][j-2]='/';
				j=j-4;
			}
			else
			{
				a[i][j]='0'+(x%10);
				x=x/10;
				if(x!=0)
					a[i-2][j]='/';
				i=i-4;
			}
			if(j<0)
			{
				i=i-2;
				j=1;
				dir=0;
			}
		}
		//display
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cout << a[i][j];
			cout << endl;
		}
	}
	return 0;
}
