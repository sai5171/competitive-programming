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
	double s,v1,v2;
	scanf("%lf",&s);
	scanf("%lf",&v1);
	scanf("%lf",&v2);
	double x,y,max;
	x=s/v1;
	y=0;
	max=x+y;
	lli temp=s/v2;
	if((v1*trunc(x)+v2*trunc(y))==s)
	{
		cout << (long long int)x << " " << (long long int)y << endl;
		return 0;
	}	
	while(y<temp)
	{
		y++;
		x=(s-(v2*y))/v1;
		if((v1*trunc(x)+v2*trunc(y))==s)
		{
			cout << (long long int)x << " " << (long long int)y << endl;
			return 0;
		}	
	}
	cout << "Impossible\n";
	return 0;
}
