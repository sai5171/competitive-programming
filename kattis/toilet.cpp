#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
	string a;
	getline(cin,a);
	int x=0;
	int c=a[0];
	for(int i=1;i<a.size();i++)
	{
		if(a[i]==c)
			x=x;
		else
			{x++;c='U';}
		if(a[i]=='D')
			{x++;c='U';}
		else
			{x=x;}
	}
	printf("%d\n",x);
	x=0;
	c=a[0];
	for(int i=1;i<a.size();i++)
	{
		if(a[i]==c)
			x=x;
		else
			{x++;c='D';}
		if(a[i]=='U')
			{x++;c='D';}
		else
			{x=x;}
	}
	printf("%d\n",x);
	x=0;
	for(int i=0;i<a.size()-1;i++)
	{
		if(a[i]!=a[i+1])
			x++;	
	}
	printf("%d",x);
	return 0;
}