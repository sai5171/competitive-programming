#include<stdio.h>
#include<iostream>
#define PI 3.141592654
using namespace std;
int main()
{
	double r;
	long int m,c;
	cin >> r >> m >> c;
	while(r!=0 && m!=0 && c!=0)
	{
		double a;
		a=r*r*PI;
		double e;
		double s=2*r;
		e=(c*s*s)/m;
		//cout << a << " " << e <<endl;
		printf("%g %g\n",a,e);
		cin >> r >> m >> c;
	}
	return 0;
}