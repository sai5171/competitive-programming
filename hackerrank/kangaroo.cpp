#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c,d;
	cin >> a >> b >> c >> d;
	for(long long int i=0;i<10000000;i++)
	{
			if(a==c)
			{
				cout << "YES" << endl;
				return 0;
			}
			a+=b;
			c+=d;
	}
	cout << "NO" << endl;
	return 0;
}
