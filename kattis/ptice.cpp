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
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main(){
    long long int n;
	cin >> n;
	long long int ch=getchar();
	string s;
	getline(cin,s);
	string s1="ABC";
	string s2="BABC";
	string s3="CCAABB";
	long long int x=0,y=0,z=0;
	long long int cx=0,cy=0,cz=0;
	for(long long int i=0;i<s.size();i++)
	{
		if(s[i]==s1[x])
		{
			cx++;
		}
			x++;
			if(x==s1.size())
				x=0;
		if(s[i]==s2[y])
		{
			cy++;
		}
			y++;
			if(y==s2.size())
				y=0;
		if(s[i]==s3[z])
		{
			cz++;
		}
			z++;
			if(z==s3.size())
				z=0;
	}
	long long int r=cx;
	if(r<cy)
		r=cy;
	if(r<cz)
		r=cz;
	cout << r << endl;
	if(r==cx)
		cout << "Adrian" << endl;
	if(r==cy)
		cout << "Bruno" << endl;
	if(r==cz)
		cout << "Goran" << endl;
	return 0;
}