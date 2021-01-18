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
int main()
{
	//ifstream fin ("a.in");
	int a,b,c,d;
	int p,m,g;
	cin >> a >> b >> c >> d;
	cin >> p >> m >> g;
	int ag=1,ca=0,x=0;
	int count=0;
	for(int i=0;i<p;i++)
	{
		if(x==a && ag==1 && ca==0)
			{ca=1;x=0;ag=0;}
		if(x==b && ca==1 && ag==0)
			{ag=1;x=0;ca=0;}
		x++;
	}
	//cout << ag << ca << endl;
	if(ag==1)
		count++;
	ag=1;ca=0;x=0;
	for(int i=0;i<p;i++)
	{
		if(x==c && ag==1 && ca==0)
			{ca=1;x=0;ag=0;}
		if(x==d && ca==1 && ag==0)
			{ag=1;x=0;ca=0;}
		x++;
	}
	//cout << ag << ca << endl;
	if(ag==1)
		count++;
	if(count==2)
		cout <<"both\n";
	else if(count==1)
		cout <<"one\n";
	else
		cout<<"none\n";
	ag=1;ca=0;x=0;
	count=0;
	for(int i=0;i<m;i++)
	{
		if(x==a && ag==1 && ca==0)
			{ca=1;x=0;ag=0;cout;}
		if(x==b && ca==1 && ag==0)
			{ag=1;x=0;ca=0;cout;}
		x++;
	}
	//cout << ag << ca << endl;
	if(ag==1)
		count++;
	ag=1;ca=0;x=0;
	for(int i=0;i<m;i++)
	{
		if(x==c && ag==1 && ca==0)
			{ca=1;x=0;ag=0;}
		if(x==d && ca==1 && ag==0)
			{ag=1;x=0;ca=0;}
		x++;
	}
	//cout << ag << ca << endl;
	if(ag==1)
		count++;
	if(count==2)
		cout <<"both\n";
	else if(count==1)
		cout <<"one\n";
	else
		cout<<"none\n";
	ag=1;ca=0;x=0;
	count=0;
	for(int i=0;i<g;i++)
	{
		if(x==a && ag==1 && ca==0)
			{ca=1;x=0;ag=0;cout;}
		if(x==b && ca==1 && ag==0)
			{ag=1;x=0;ca=0;cout;}
		x++;
	}
	//cout << ag << ca << endl;
	if(ag==1)
		count++;
	ag=1;ca=0;x=0;
	for(int i=0;i<g;i++)
	{
		if(x==c && ag==1 && ca==0)
			{ca=1;x=0;ag=0;}
		if(x==d && ca==1 && ag==0)
			{ag=1;x=0;ca=0;}
		x++;
	}
	//cout << ag << ca << endl;
	if(ag==1)
		count++;
	if(count==2)
		cout <<"both\n";
	else if(count==1)
		cout <<"one\n";
	else
		cout<<"none\n";
	return 0;
}
