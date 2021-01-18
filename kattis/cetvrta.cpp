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
//end input macros 
using namespace std;
int main(){
	long long int x1,y1,x2,y2,x3,y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	if(x1==x2)
		x1=x2=0;
	else if(x1==x3)
		x1=x3=0;
	else
		x2=x3=0;
	if(y1==y2)
		y1=y2=0;
	else if(y1==y3)
		y1=y3=0;
	else
		y2=y3=0;
	cout << x1+x2+x3 << " " << y1+y2+y3 << endl;
	return 0;
}
