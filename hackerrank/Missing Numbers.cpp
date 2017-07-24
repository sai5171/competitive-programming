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
	map<long long int,long long int> a,b;
	long long int n;
	cin >> n;
	while(n--)
	{
	    long long int x;
	    cin >> x;
	    long long int sum=a[x];
	    sum++;
	    a[x]=sum;
	}
	cin >> n;
	while(n--)
	{
	    long long int x;
	    cin >> x;
	    long long int sum=b[x];
	    sum++;
	    b[x]=sum;
	}
	auto i=a.begin(),j=b.begin();
	for(;i!=a.end() || j!=b.end();)
	{
	    if(i->first==j->first && i->second!=j->second)
	    {
	        cout << i->first << " ";
	    }
	    if(i->first==j->first)
	    {
	        i++;
	        j++;
	    }
	    else if(i->first>j->first)
	    {
	        cout << j->first << " ";
	        j++;
	    }
	    else
	    {
	        cout << i->first << " ";
	        i++;
	    }
	}
	for(;i!=a.end();i++)
	    cout << i->first << " " ;
	for(;j!=b.end();j++)
	    cout << j->first << " "; 
	return 0;
}
