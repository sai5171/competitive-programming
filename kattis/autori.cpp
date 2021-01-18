#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	for(auto i=s.begin();i!=s.end();i++)
	{
		if(i==s.begin())
		{
			cout << *i;
		}
		else if(*i=='-')
		{
			cout << *(i+1);
		}
	}
	return 0;
}
