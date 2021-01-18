#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin >> t;
	for(long long int tc=1;tc<=t;tc++)
	{
		long long int n,m;
		cin >> n >> m;
		char a[n][m];
		cin.get();
		for(long long int i=0;i<n;i++)
		{
			for(long long int j=0;j<m;j++)
			{
				a[i][j]=cin.get();
			}
			cin.get();
		}
		cout << "Test " << tc << endl;
		for(long long int i=n-1;i>=0;i--)
		{
			for(long long int j=m-1;j>=0;j--)
			{
				cout << a[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}
