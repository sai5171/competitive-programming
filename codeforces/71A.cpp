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
	long int n;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;
		int l=s.size();
		if(l>10)
		{
			cout << s[0] << l-2 << s[l-1] << endl;
		}
		else
		{
			cout << s << endl;
		}
	}
	return 0;
}
