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
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main(){
	map<string,string> m;
	string s;
	while(1==1)
	{
		getline(cin,s);
		if(s=="")
			break;
		string a,b;
		long long int i;
		for(i=0;s[i]!=' ';i++);
		a=s.substr(0,i);
		b=s.substr(i+1,s.size());
		m[b]=a;
	}
	while(getline(cin,s))
	{
		auto it=m.find(s);
		if(it==m.end())
			cout << "eh" << endl;
		else
			cout << m[s] << endl;
	}
	return 0;
}
