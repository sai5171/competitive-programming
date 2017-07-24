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
	string s;
	getline(cin,s);
	double l=0,u=0,w=0,sy=0,t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>=65 && s[i]<=90)
			u++;
		else if(s[i]>=97 && s[i]<=122)
			l++;
		else if(s[i]==95)
			w++;
		else
			sy++;
		t++;
	}	
	double a;
	a=w/t;
	cout << a << endl;
	a=l/t;
	cout << a << endl;
	a=u/t;
	cout << a << endl;
	a=sy/t;
	cout << a << endl;
	return 0;
}
