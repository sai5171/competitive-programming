#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <string>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main()
{
	//ofstream fout ("a.ou");
	//ifstream fin ("a.in");
	map<string,int> m;
	long long int d=0;
	string s;
	while(getline(cin,s))
	{
		if(!s.compare("OPEN"))
			d++;
		else if(!s.compare("CLOSE"))
		{
			cout << "Day " << d << endl;
			for(auto i=m.begin();i!=m.end();i++)
			{
				cout << i->first << " $";
				double val;
				val=i->second;
				val=val*0.10;
				printf("%.2f\n",val);
			}
			m.clear();
			cout << endl;
		}
		if(s.compare(0,5,"ENTER",0,5) == 0)
		{
			long long int x,i;
			for(i=0;i<s.size();i++)
			{
				if(s[i]>='0' && s[i]<='9')
					{
						x=i;
						break;
					}
			}
			string s2 = s.substr (6,x-6);
			x=stoll(s.substr (x,s.size()));
			long long int val;
			val=m[s2];
			if(val==0)
				m[s2]=val+x;
			else
				m[s2]=x-m[s2];
		}
		else if(s.compare(0,4,"EXIT",0,4)==0)
		{
			long long int x,i;
			for(i=0;i<s.size();i++)
			{
				if(s[i]>='0' && s[i]<='9')
					{
						x=i;
						break;
					}
			}
			string s2 = s.substr (5,x-5);
			x=stoll(s.substr (x,s.size()));
			long long int d=m[s2];
			m[s2]=x-d;
		}
	}
	return 0;
}
