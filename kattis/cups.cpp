#include<bits/stdc++.h>
using namespace std;
long long int s_lli(string s)
{
	long long int x=0;
	for(auto i=s.begin();i!=s.end();i++)
	{
		x=(x*10)+(*i)-48;
	}
	return x;
}
int main()
{
	long long int t;
	cin >> t;
	cin.get();
	map<long long int,string> m;
	while(t--)
	{
		string s;
		getline(cin,s);
		if(s[0]>='0' && s[0]<='9')
		{
			long long int i=0;
			for(;s[i]!=' ';i++);
			string s1=s.substr(i+1,s.size());
			string s2=s.substr(0,i); 
			long long int x=s_lli(s2);
			m[x/2]=s1;
		}
		else
		{
			long long int i=0;
			for(;s[i]!=' ';i++);
			string s1=s.substr(i+1,s.size());
			string s2=s.substr(0,i);
			long long int x=s_lli(s1);
			m[x]=s2;
		}
	}
	for(auto i=m.begin();i!=m.end();i++)
	{
		cout << i->second << endl;
	}
	return 0;
}
