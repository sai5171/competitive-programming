#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double c;
	cin >> c;
	long double l;
	cin >> l;
	long double sum=0;
	while(l--)
	{
		long double x,y;
		cin >> x >> y;
		sum+=x*y;
	}
	cout << setprecision(7) << fixed;
	cout << sum*c << endl;
	return 0;
}
