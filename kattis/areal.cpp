#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <string>
#include <cmath>
double sq(double x)
{return pow(x,0.5);}
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
	double x;
	cin >> x;
	double a;
	a= sq(x);
	a=a*4;
	long int y;
	y=(long int)a;
	if(a-y==0)
		printf("%.0lf",a);
	else
	printf("%.20lf",a);
	return 0;
}