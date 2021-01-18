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
	string s;
	map<string,long long int> m;
	while(getline(cin,s))
	{
		if(!s.compare(0,6,"define"))
		{
			string s1,s2;
			long long int i;
			for(i=7;s[i]!=' ';i++);
			s1=s.substr(7,i-7);
			s2=s.substr(i+1,s.size());
			//cout << s1 << " " << s2 << endl;
			long long int x=stoll(s1);
			m[s2]=x;
		}
		if(!s.compare(0,4,"eval"))
		{
			string s1,s2;
			int op=0;
			long long int i;
			for(i=5;s[i]!='>' && s[i]!='<' && s[i]!='=';i++)
			s1=s.substr(5,i-5);
			if(s[i]=='>')
				op=1;
			if(s[i]=='<')
				op=2;
			if(s[i]=='=')
				op=3;
			s2=s.substr(i+2,s.size());
			auto it=m.find(s1);
			if(it==m.end())
				{cout << "undefined" << endl;continue;}
			it=m.find(s2);
			if(it==m.end())
				{cout << "undefined" << endl;continue;}
			if(s[i]=='>')
			{
				if(m[s1]>m[s2])
					cout << "true" << endl;
				else
					cout << "false" << endl;
			}
			if(s[i]=='<')
			{
				if(m[s1]<m[s2])
					cout << "true" << endl;
				else
					cout << "false" << endl;
			}
			if(s[i]=='=')
			{
				if(m[s1]==m[s2])
					cout << "true" << endl;
				else
					cout << "false" << endl;
			}
			//cout << s1 << " " << op << " " << s2 << endl;
		}
	}
	return 0;
}
