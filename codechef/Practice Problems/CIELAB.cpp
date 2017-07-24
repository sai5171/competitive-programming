#include <iostream>
using namespace std;

int main() {
	long long int n,m;
	cin >> n >> m;
	long long int d=n-m;
	int r=d%10;
	if(r<9)
	    d++;
	else
	    d--;
	cout << d;
	return 0;
}
