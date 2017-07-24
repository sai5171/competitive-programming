#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
	int x;
	cin >> x;
	int ch;
	ch=getchar();
	vector<string> a,b;
	while(x--)
	{
		string s;
		getline(cin,s);
		a.pb(s);
		b.pb(s);
	}
	int count =0;
	sort(a.begin(),a.end(),[](const string x,const string y){return x>y;});
	if(equal(a.begin(),a.end(),b.begin()))
	{	cout << "DECREASING";count=1;}
	sort(a.begin(),a.end(),[](const string x,const string y){return x<y;});
	if(equal(a.begin(),a.end(),b.begin())&& count==0)
	{	cout <<"INCREASING";count=1;}
	if(count==0)
		cout <<"NEITHER";	
	return 0;
}