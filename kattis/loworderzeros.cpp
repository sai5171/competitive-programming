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
long long int fun(long long int n)
{
	if(n<=5)
	{
		if(n==0)
				return 1;
		else if(n==1)
				return 1;
		else if(n==2)
				return 2;
		else if(n==3)
				return 6;
		else if(n==4)
				return 24;
		else if(n==5)
				return 12;
		return 0;
	}
	lli d=n/5;
	lli r=n%5;
	lli fact=1;
	if(r==2)
		fact=2;
	else if(r==3)
		fact=6;
	else if(r==4)
		fact=24;
	if(d%4==0)
			fact=fact*6;
	else if(d%4==1)
			fact=fact*2;
	else if(d%4==2)
			fact=fact*4;
	else if(d%4==3)
			fact=fact*8;
	fact=fact*fun(d);
	return fact;
}
int main(){
	lli n;
	while(cin >> n && n!=0)
	{
			cout << fun(n)%10 << endl;
	}
	return 0;
}
