#include<stdio.h>
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include<string.h>
#define pb push_back
using namespace std;
int main()
{
	vector<string> v;
	string s,d;
	while(cin >> s)
	{
	    int i;
	    d=s;
	    for(i=0;i<d.size();i++)
	    {
	        if(d[i]>=97 && d[i]<=122)
	            ;
	        else
	            d[i]=d[i]+32;
	    }
		if(find(v.begin(),v.end(),d)!=v.end())
		{
		    cout << ". " ;
		}
		else
		{
		    cout << s << " ";
		    v.pb(d);
		}
	}
	return 0;
}
