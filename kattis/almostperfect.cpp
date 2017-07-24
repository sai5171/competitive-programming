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
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	long long int n;
	while(cin >> n)
	{
		long long int sum=0;
		for(long long int i=1;i<=sqrt(n);i++)
		{
			if(n%i==0)
			{	sum=sum+i;
				if(i!=1 && i!=n/i)
					sum=sum+n/i;
			}
			if(sum>n)
				break;
		}
		if(sum==n)
			cout << n << " perfect\n";
		else if(abs(n-sum)>=0 && abs(n-sum)<=2)
			cout << n << " almost perfect\n";
		else if(sum!=n)
			cout << n << " not perfect\n";
	}
	return 0;
}
