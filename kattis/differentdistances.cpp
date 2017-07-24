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
int main()
{
	double x1,y1,x2,y2,p;
	while(cin >> x1 && x1!=0)
	{
		cin >> y1 >> x2 >> y2 >> p;
		double a,b,sum1=1,sum2=1;
		a=abs(x1-x2);
		sum1=powl(a,p);
		b=abs(y1-y2);
		sum2=powl(b,p);
		sum1+=sum2;
		double temp=1.0/p;
		sum1=powl(sum1,temp);
		cout << setprecision (20) << fixed;
		cout << sum1 << endl;
	}
	return 0;
}	