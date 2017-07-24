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
int main()
{
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	ios_base::sync_with_stdio(false);
	string s;
	map<string,long long int> m;
	while(cin >> s)
	{
		if(!s.compare("clear"))
			m.clear();
		else if(!s.compare("def"))
		{
			string s1;
			long long int x;
			cin >> s1 >> x;
			m[s1]=x;
		}
		else if(!s.compare("calc"))
		{
			long long int x=0;
			string s1;
			string op="+";
			bool uk=false;
			while(1==1)
			{
				cin >> s1;
				cout << s1 << " ";
				if(!op.compare("+"))
				{
					auto it=m.find(s1);
					if(it==m.end())
						uk=true;
					else				
						x=x+m[s1];
				}
				else
				{
					auto it=m.find(s1);
					if(it==m.end())
						uk=true;
					else				
						x=x-m[s1];
				}
				cin >> op;
				cout << op << " ";
				if(!op.compare("="))
				{
					bool pres=false;
					auto it=m.begin();
					for(;it!=m.end();it++)
					{
						if(it->second==x)
						{
							pres=true;
							break;
						}
					}
					if(uk==0 && pres==1)
						cout << it->first << endl;
					else
						cout << "unknown" << endl;
					break;
				}
			}
		}
	}
	return 0;
}
