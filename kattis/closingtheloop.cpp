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
	long long int t;
	cin >> t;
	for(long long int it=1;it<=t;it++)
	{
		cout << "Case #" << it << ": ";
		deque<long long int> vr,vb;
		long long int n;
		cin >> n;
		while(n--)
		{
			long long int x;
			char y;
			cin >> x >> y;
			if(y=='R')
				vr.pb(x);
			else
				vb.pb(x);
		}
		sort(vr.begin(),vr.end(),[](const long long int a,const long long int b){
			return a>b;
		});
		sort(vb.begin(),vb.end(),[](const long long int a,const long long int b){
			return a>b;
		});
		long long int sum=0;
		while(vr.size()>0 && vb.size()>0)
		{
			sum+=vr.front()+vb.front()-2;
			vr.pop_front();
			vb.pop_front();
		}
		cout << sum << endl;
	}
	return 0;
}
