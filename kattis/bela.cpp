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
	map<char,lli> d,nd;
	d['A']=11;
	d['K']=4;
	d['Q']=3;
	d['J']=20;
	d['T']=10;
	d['9']=14;
	d['8']=0;
	d['7']=0;
	nd['A']=11;
	nd['K']=4;
	nd['Q']=3;
	nd['J']=2;
	nd['T']=10;
	nd['9']=0;
	nd['8']=0;
	nd['7']=0;
	lli n;
	sflli(n);
	n*=4;
	getchar();
	lli x=getchar();
	getchar();
	lli sum=0;
	if(x=='S')
	{
		while(n--)
		{
			lli y,z;
			y=getchar();
			z=getchar();
			getchar();
			if(z=='S')
				sum+=d[y];
			else
				sum+=nd[y];
		}
	}
	else if(x=='H')
	{
		while(n--)
		{
			lli y,z;
			y=getchar();
			z=getchar();
			getchar();
			if(z=='H')
				sum+=d[y];
			else
				sum+=nd[y];
		}
	}
	else if(x=='D')
	{
		while(n--)
		{
			lli y,z;
			y=getchar();
			z=getchar();
			getchar();
			if(z=='D')
				sum+=d[y];
			else
				sum+=nd[y];
		}
	}
	else if(x=='C')
	{
		while(n--)
		{
			lli y,z;
			y=getchar();
			z=getchar();
			getchar();
			if(z=='C')
				sum+=d[y];
			else
				sum+=nd[y];
		}
	}
	cout << sum << endl;
	return 0;
}
