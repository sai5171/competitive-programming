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
	long long int n;
	cin >> n;
	list<long long int> l;
	while(n--)
	{
		long long int x;
		cin >> x;
		l.push_back(x);
	}
	while(1)
	{
		if(l.size()!=0)
			cout << l.size() << endl;
		else
			break;
		auto min=min_element(l.begin(),l.end());
		for(auto i=l.begin();i!=l.end();)
		{
			if(*i==*min)
				i=l.erase(i);
			else
				i++;
		}
	}
	return 0;
}
