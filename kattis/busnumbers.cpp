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
	int n;
	cin >> n;
	vector<int> a,b;
	int i,j;
	fr(i,0,n)
	{
		int x;
		cin >> x;
		a.pb(x);
	}
	sort(a.begin(),a.end());
	for(i=0;i<a.size()-1;i++)
	{
		int x;
		x=a[i+1]-a[i];	
		if(x==1)
			b.pb(x);
		else
			b.pb(3);
	}
	b.pb(3);
	for(i=0;i<a.size();)
	{
		if((b[i]==b[i+1])&&(b[i]==1))
		{
			for(j=i+1;b[j]!=3;j++);	
			printf("%d-%d ",a[i],a[j]);
			i=j+1;
		}
		else
		{printf("%d ",a[i]);i++;}
		
	}
	return 0;
}
