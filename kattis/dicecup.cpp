#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int x,y;
	cin >> x >> y;
	long long int mi=min(x,y);
	long long int ma=max(x,y);
	for(long long int i=mi+1;i<=ma+1;i++)
		cout << i << endl;
	return 0;
}
