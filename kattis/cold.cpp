#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long int x,c=0;
	cin >> x;
	while(x--)
	{
		long int y;
		cin >> y;
		if(y<0)
		c++;
	}
	cout << c;
	return 0;
}