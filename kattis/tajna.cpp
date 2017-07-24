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
	string s;
	cin >> s;
	long long int len=s.size();
	long long int r,c;
	r=1;
	while(1==1)
	{
		if(len%r==0)
			c=len/r;
		if(r>=c)
			break;
		r++;
	}
	long long int a[r][c];
	for(long long int i=0,k=0;i<r;i++)
	{
		for(long long int j=0;j<c;j++)
		{
			a[i][j]=s[k++];
		}
	}
	for(long long int j=0;j<c;j++)
	{
		for(long long int i=0;i<r;i++)
			cout << (char)a[i][j];
	}
	return 0;
}
