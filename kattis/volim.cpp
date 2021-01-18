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
	lli k;
	sflli(k);
	lli n;
	sflli(n);
	lli sum=0;
	while(n--)
	{
		lli t;
 		char c;
		sflli(t);
		getchar();
		c=getchar();
		getchar();
		if(sum+t>210)
			continue;
		sum+=t;
		if(c=='T')
		{
			if(k==8)
				k=1;
			else
				k++;
		}
	}
	cout << k << endl;
	return 0;
}
