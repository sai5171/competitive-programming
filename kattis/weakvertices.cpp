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
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main(){
	lli n;
	while(cin >> n && n!=-1)
	{
		lli a[n][n];
		for(lli i=0;i<n;i++)
			for(lli j=0;j<n;j++)
				scanf("%lld",&a[i][j]);
		for(lli i=0;i<n;i++)
		{
			vector<lli> v;
			lli c=0;
			for(lli j=0;j<n;j++)
				if(a[i][j]==1)
				{
					v.pb(j);
					c++;
				}
			if(c==0)
				cout << i << " ";
			else
			{
				int check=0;
				for(lli j=0;j<v.size();j++)
				{
					for(lli k=j+1;k<v.size();k++)
					{
						if(a[v[j]][v[k]]==1)
							check=1;
					}
				}
				if(check==0)
					cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
