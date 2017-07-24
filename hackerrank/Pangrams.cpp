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
//#define cin fin
//#define cout fout
//end input macros
using namespace std;
int main(){
	//ifstream fin ("a.in");
	//ofstream fout ("a.ou");
	string s;
	vector<long long int> v(26,0);
	getline(cin,s);
	for(long long int i=0;i<s.size();i++)
	{
	    if(s[i]>='a' && s[i]<='z')
	        v[s[i]-'a']++;
	    else if(s[i]>='A' && s[i]<='Z')
	        v[s[i]-'A']++;
	}
	long long int count=0;
	for(auto i=v.begin();i!=v.end();i++)
	{
	    if(*i>0)  
	        count++;
	}
	if(count==26)
	    cout << "pangram\n";
	else
	    cout << "not pangram\n";
	return 0;
}
