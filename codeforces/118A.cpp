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
	cin >> s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I')
			continue;
		else if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i')
			continue;
		else
		{
			cout <<".";
			if(s[i]>=65 && s[i]<=90)
			{
				s[i]=s[i]+32;
				cout <<s[i];
			}
			else
				cout << s[i];
		}
	}
	return 0;
}
