#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x;
	cin >> x;
	int n;
	cin >> n;
	int tot=0;
	while(n--)
	{
		int p;
		cin >> p;
		tot+=x-p;
	}
	cout << tot+x << endl;
	return 0;
}
