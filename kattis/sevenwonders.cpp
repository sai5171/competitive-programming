#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	long long int c=0,t=0,g=0;
	for(auto i=s.begin();i!=s.end();i++)
	{
		if(*i=='C')
			c++;
		else if(*i=='T')
			t++;
		else
			g++;
	}
	cout << (c*c)+(t*t)+(g*g)+(min(min(c,t),g)*7) << endl;
	return 0;
}
