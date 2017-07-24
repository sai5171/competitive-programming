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
//end input macros 
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	int i;
	int s=0,c=0;
	fr(i,0,n)
	{
		int t;
		cin >> t;
		if((s+t)<=m)
		{
		s=s+t;c++;
		}
		else
			break;
	}
	cout << c;
	return 0;
}
