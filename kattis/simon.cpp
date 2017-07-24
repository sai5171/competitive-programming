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
	int x;
	x=getchar();
	string s;
	string s1 ("simon says");
	while(n--)
	{
		getline(cin,s);	
		if(equal(s1.begin(),s1.end(),s.begin()))
		{
		       for(int i=11;i<s.size();i++)
		        cout << s[i];
		        cout << endl;
		}
		else
		    cout << endl;
	}	
	return 0;
}
