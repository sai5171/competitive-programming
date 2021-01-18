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
#define cin fin
#define cout fout
//end input macros
using namespace std;
long long int fun(string,string);
long long int fun(string target,string typed)
{
	long long int count=0;
	long long int i=0;
	for(;i<typed.size();i++)
	{
		if(typed[i]!=target[i])
			break;
	}
	long long int j=i;
	for(;i<typed.size();i++)
		count++;
	for(;j<target.size();j++)
		count++;
	return count;
}
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	long long int n;
	cin >> n;
	cin.get();
	while(n--)
	{
		string target,typed,s1,s2,s3;
		long long int res=0;
		cin >> target;
		cin >> typed;
		res=fun(target,typed);
		cin >> s1;
		cin >> s2;
		cin >> s3;
		res=min(res,1+fun(target,s1));
		res=min(res,1+fun(target,s2));
		res=min(res,1+fun(target,s3));
		cout << res << endl;
	}
	return 0;
}
