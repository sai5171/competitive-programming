#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,w,h;
	cin >> n >> w >> h;
	double f = sqrt(pow(w,2)+pow(h,2));
	while(n--)
	{
		int x;
		cin >> x;
		if(f>=x)
		{
			cout << "DA\n";
		}
		else
		{
			cout << "NE\n";
		}
	}
	return 0;
}
