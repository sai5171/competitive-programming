#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b,c;
	long long int x,y,z;
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	long long int A=0,B=0;
	if(a==x)
		;
	else if(a>x)
		A++;
	else
		B++;
	if(b==y)
		;
	else if(b>y)
		A++;
	else
		B++;
	if(c==z)
		;
	else if(c>z)
		A++;
	else
		B++;
	cout << A << " " << B << endl;
	return 0;
}
