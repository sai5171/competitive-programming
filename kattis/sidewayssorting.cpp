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
namespace
{
    struct case_insensitive_less : public std::binary_function< char,char,bool >
    {
        bool operator () (char x, char y) const
        {
            return tolower(x) < tolower(y);
        }
    };

    bool NoCaseLess(const std::string &a, const std::string &b)
    {
        return std::lexicographical_compare( a.begin(),a.end(),
                b.begin(),b.end(), case_insensitive_less() );
    }

}
int main(){
	lli n,m;
	while(scanf("%lld %lld",&n,&m)==2 && n!=0 && m!=0)
	{
		getchar();
		char a[n][m];
		vector<string> v;
		for(lli i=0;i<n;i++)
		{
			for(lli j=0;j<m;j++)
				scanf("%c",&a[i][j]);
			getchar();
		}
		for(lli j=0;j<m;j++)
		{
			string s;
			char x[100];
			lli k=0;
			for(lli i=0;i<n;i++)
				x[k++]=a[i][j];
			x[k]='\0';
			s.assign(x);
			v.pb(s);
		}
		for(lli i=0;i<v.size();i++)
		{
			string s;
			s.append(v[i]);
		}
		stable_sort(v.begin(),v.end(),NoCaseLess);
		for(lli j=0;j<n;j++)
		{
			for(lli i=0;i<v.size();i++)
			{
				string s;
				s.append(v[i]);
				cout << s[j];
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
