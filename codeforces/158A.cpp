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
//end header macros
//input macros
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define si(n) scanf("%d",&n);
//end input macros 
using namespace std;
int main(){
	long long int n,k;
	cin >> n >> k;
	int c=0;
	vector<int> v;
	int s=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin >> x;
		s+=x;
		v.pb(x);
	}
	if(s==0)
		{cout <<"0";return 0;}
	int t=v[k-1];
	for(int i=0;i<n;i++)
	{
		if(v[i]>=t && v[i]!=0)
			c++;
	}
	cout << c;
	return 0;
}
