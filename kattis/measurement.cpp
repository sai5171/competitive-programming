//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
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
//end input macros 
using namespace std;
int main(){
	double x;
	string s1,s2;
	cin >> x >> s1 >> s2 >> s2;
	cout << setprecision (10) << fixed;
	if(s1=="lea" || s1=="league")
	{
		if(s2=="lea" || s2=="league")
			cout << x << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x*3 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x*3*8 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x*3*8*10 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x*3*8*10*22 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x*3*8*10*22*3 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x*3*8*10*22*3*12 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*3*8*10*22*3*12*1000 << endl;
	}
	else if(s1=="mi" || s1=="mile")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x*8 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x*8*10 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x*8*10*22 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x*8*10*22*3 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x*8*10*22*3*12 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*8*10*22*3*12*1000 << endl;
	}
	else if(s1=="fur" || s1=="furlong")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3/8 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x/8 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x*10 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x*10*22 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x*10*22*3 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x*10*22*3*12 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*10*22*3*12*1000 << endl;
	}
	else if(s1=="ch" || s1=="chain")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3/8/10 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x/8/10 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x/10 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x*22 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x*22*3 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x*22*3*12 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*22*3*12*1000 << endl;
	}
	else if(s1=="yd" || s1=="yard")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3/8/10/22 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x/8/10/22 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x/10/22 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x/22 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x*3 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x*3*12 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*3*12*1000 << endl;
	}
	else if(s1=="ft" || s1=="foot")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3/8/10/22/3 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x/8/10/22/3 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x/10/22/3 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x/22/3 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x/3 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x << endl;
		else if(s2=="in" || s2=="inch")
			cout << x*12 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*12*1000 << endl;
	}
	else if(s1=="in" || s1=="inch")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3/8/10/22/3/12 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x/8/10/22/3/12 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x/10/22/3/12 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x/22/3/12 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x/3/12 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x/12 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x << endl;
		else if(s2=="th" || s2=="thou")
			cout << x*1000 << endl;
	}
	else if(s1=="th" || s1=="thou")
	{
		if(s2=="lea" || s2=="league")
			cout << x/3/8/10/22/3/12/1000 << endl;
		else if(s2=="mi" || s2=="mile")
			cout << x/8/10/22/3/12/1000 << endl;
		else if(s2=="fur" || s2=="furlong")
			cout << x/10/22/3/12/1000 << endl;
		else if(s2=="ch" || s2=="chain")
			cout << x/22/3/12/1000 << endl;
		else if(s2=="yd" || s2=="yard")
			cout << x/3/12/1000 << endl;
		else if(s2=="ft" || s2=="foot")
			cout << x/12/1000 << endl;
		else if(s2=="in" || s2=="inch")
			cout << x/1/1000 << endl;
		else if(s2=="th" || s2=="thou")
			cout << x << endl;
	}
	return 0;
}
