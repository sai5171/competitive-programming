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
	long long int n;
	cin >> n;
	while(n--)
	{
	    deque<long long int> v;
	    long long int x;
	    cin >> x;
	    for(long long int i=1;i<=32;i++)
	    {
	        v.push_front(x%2);
	        x=x/2;
	    }
	    for(long long int i=0;i<32;i++)
	        v[i]=v[i]>0?0:1;
	    long long int num=0;
	    long long int count=1;
	    while(v.size()>0)
	    {
	        num=num+v.back()*count;
	        v.pop_back();
	        count*=2;
	    }
	    cout << num << endl;
	}
	return 0;
}
