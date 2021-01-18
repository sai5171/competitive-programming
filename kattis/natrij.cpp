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
	int a,b,c,x,y,z;
	char temp;
	cin >> a;
	cin >> temp;
	cin >> b;
	cin >> temp;
	cin >> c;
	cin >> x;
	cin >> temp;
	cin >> y;
	cin >> temp;
	cin >> z;
	int count=0;
	if(z-c>=0)
		c=z-c;
	else
	{
		c=60-abs(z-c);
		count=1;
	}
	if(y-b-count>=0)
	{
		b=y-b-count;
		count=0;
	}
	else
	{
		b=60-abs(y-b)-count;
		count=1;
	}
	if(x-a-count>=0)
	{
		a=x-a-count;
		count=0;
	}
	else
	{
		a=24-abs(x-a)-count;
		count=0;
	}
	if(a+b+c==0)
		{cout << "24:00:00";return 0;}
	if(a>9)
		cout << a;
	else
		cout << "0" << a;
	cout <<":";
	if(b>9)
		cout << b;
	else
		cout << "0" << b;
	cout << ":";
	if(c>9)
		cout<< c;
	else
		cout << "0" << c;
	cout << endl;
	return 0;
}
