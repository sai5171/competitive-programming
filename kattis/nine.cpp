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
long long int fun(long long int x,long long int y)
{
	if(y==1)
		return 9;
	if(y%2==0)
	{
		long long int temp=fun(x,y/2);
		return (temp*temp)%1000000007;
	}
	else
	{
		long long int temp=fun(x,y/2);
		return (temp*temp*x)%1000000007;
	}
}
int main()
{
	ifstream fin ("a.in");
	ofstream fout ("a.ou");
	long long int t;
	fin >> t;
	while(t--)
	{
		long long int n;
		fin >> n;
		if(n==1)
			fout << "8" << endl;
		else
		fout << (8*fun(9,n-1))%1000000007 << endl;
	}
	return 0;
}
