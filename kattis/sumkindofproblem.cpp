#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int x,y;
		cin >> x >> y;
		cout << x << " ";
		long long int sum=0;
		for(long long int i=1;i<=y;i++)
			sum+=i;
		cout << sum << " ";
		sum=0;
		for(long long int i=1,j=1;i<=y;i++)
		{
			sum+=j;
			j++;
			j++;
		}
		cout << sum << " ";
		sum=0;
		for(long long int i=1,j=2;i<=y;i++)
		{
			sum+=j;
			j++;
			j++;
		}
		cout << sum << endl;
	}
	return 0;
}
