#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	string s;
	long long int n;
	cin >> n;
	while(n--)
	{
		long long int x;
		cin >> x;
		if(4+4+4+4==x)
			{cout << "4 + 4 + 4 + 4 = " << x << endl;continue;}
		else if(4+4+4-4==x)
			{cout << "4 + 4 + 4 - 4 = " << x << endl;continue;}
		else if(4+4+4*4==x)
			{cout << "4 + 4 + 4 * 4 = " << x << endl;continue;}
		else if(4+4+4/4==x)
			{cout << "4 + 4 + 4 / 4 = " << x << endl;continue;}
		else if(4+4-4+4==x)
			{cout << "4 + 4 - 4 + 4 = " << x << endl;continue;}
		else if(4+4-4-4==x)
			{cout << "4 + 4 - 4 - 4 = " << x << endl;continue;}
		else if(4+4-4*4==x)
			{cout << "4 + 4 - 4 * 4 = " << x << endl;continue;}
		else if(4+4-4/4==x)
			{cout << "4 + 4 - 4 / 4 = " << x << endl;continue;}
		else if(4+4*4+4==x)
			{cout << "4 + 4 * 4 + 4 = " << x << endl;continue;}
		else if(4+4*4-4==x)
			{cout << "4 + 4 * 4 - 4 = " << x << endl;continue;}
		else if(4+4*4*4==x)
			{cout << "4 + 4 * 4 * 4 = " << x << endl;continue;}
		else if(4+4*4/4==x)
			{cout << "4 + 4 * 4 / 4 = " << x << endl;continue;}
		else if(4+4/4+4==x)
			{cout << "4 + 4 / 4 + 4 = " << x << endl;continue;}
		else if(4+4/4-4==x)
			{cout << "4 + 4 / 4 - 4 = " << x << endl;continue;}
		else if(4+4/4*4==x)
			{cout << "4 + 4 / 4 * 4 = " << x << endl;continue;}
		else if(4+4/4/4==x)
			{cout << "4 + 4 / 4 / 4 = " << x << endl;continue;}
		//minu
		else if(4-4+4+4==x)
			{cout << "4 - 4 + 4 + 4 = " << x << endl;continue;}
		else if(4-4+4-4==x)
			{cout << "4 - 4 + 4 - 4 = " << x << endl;continue;}
		else if(4-4+4*4==x)
			{cout << "4 - 4 + 4 * 4 = " << x << endl;continue;}
		else if(4-4+4/4==x)
			{cout << "4 - 4 + 4 / 4 = " << x << endl;continue;}
		else if(4-4-4+4==x)
			{cout << "4 - 4 - 4 + 4 = " << x << endl;continue;}
		else if(4-4-4-4==x)
			{cout << "4 - 4 - 4 - 4 = " << x << endl;continue;}
		else if(4-4-4*4==x)
			{cout << "4 - 4 - 4 * 4 = " << x << endl;continue;}
		else if(4-4-4/4==x)
			{cout << "4 - 4 - 4 / 4 = " << x << endl;continue;}
		else if(4-4*4+4==x)
			{cout << "4 - 4 * 4 + 4 = " << x << endl;continue;}
		else if(4-4*4-4==x)
			{cout << "4 - 4 * 4 - 4 = " << x << endl;continue;}
		else if(4-4*4*4==x)
			{cout << "4 - 4 * 4 * 4 = " << x << endl;continue;}
		else if(4-4*4/4==x)
			{cout << "4 - 4 * 4 / 4 = " << x << endl;continue;}
		else if(4-4/4+4==x)
			{cout << "4 - 4 / 4 + 4 = " << x << endl;continue;}
		else if(4-4/4-4==x)
			{cout << "4 - 4 / 4 - 4 = " << x << endl;continue;}
		else if(4-4/4*4==x)
			{cout << "4 - 4 / 4 * 4 = " << x << endl;continue;}
		else if(4-4/4/4==x)
			{cout << "4 - 4 / 4 / 4 = " << x << endl;continue;}
		//multimap
		else if(4*4+4+4==x)
			{cout << "4 * 4 + 4 + 4 = " << x << endl;continue;}
		else if(4*4+4-4==x)
			{cout << "4 * 4 + 4 - 4 = " << x << endl;continue;}
		else if(4*4+4*4==x)
			{cout << "4 * 4 + 4 * 4 = " << x << endl;continue;}
		else if(4*4+4/4==x)
			{cout << "4 * 4 + 4 / 4 = " << x << endl;continue;}
		else if(4*4-4+4==x)
			{cout << "4 * 4 - 4 + 4 = " << x << endl;continue;}
		else if(4*4-4-4==x)
			{cout << "4 * 4 - 4 - 4 = " << x << endl;continue;}
		else if(4*4-4*4==x)
			{cout << "4 * 4 - 4 * 4 = " << x << endl;continue;}
		else if(4*4-4/4==x)
			{cout << "4 * 4 - 4 / 4 = " << x << endl;continue;}
		else if(4*4*4+4==x)
			{cout << "4 * 4 * 4 + 4 = " << x << endl;continue;}
		else if(4*4*4-4==x)
			{cout << "4 * 4 * 4 - 4 = " << x << endl;continue;}
		else if(4*4*4*4==x)
			{cout << "4 * 4 * 4 * 4 = " << x << endl;continue;}
		else if(4*4*4/4==x)
			{cout << "4 * 4 * 4 / 4 = " << x << endl;continue;}
		else if(4*4/4+4==x)
			{cout << "4 * 4 / 4 + 4 = " << x << endl;continue;}
		else if(4*4/4-4==x)
			{cout << "4 * 4 / 4 - 4 = " << x << endl;continue;}
		else if(4*4/4*4==x)
			{cout << "4 * 4 / 4 * 4 = " << x << endl;continue;}
		else if(4*4/4/4==x)
			{cout << "4 * 4 / 4 / 4 = " << x << endl;continue;}
		//div
		else if(4/4+4+4==x)
			{cout << "4 / 4 + 4 + 4 = " << x << endl;continue;}
		else if(4/4+4-4==x)
			{cout << "4 / 4 + 4 - 4 = " << x << endl;continue;}
		else if(4/4+4*4==x)
			{cout << "4 / 4 + 4 * 4 = " << x << endl;continue;}
		else if(4/4+4/4==x)
			{cout << "4 / 4 + 4 / 4 = " << x << endl;continue;}
		else if(4/4-4+4==x)
			{cout << "4 / 4 - 4 + 4 = " << x << endl;continue;}
		else if(4/4-4-4==x)
			{cout << "4 / 4 - 4 - 4 = " << x << endl;continue;}
		else if(4/4-4*4==x)
			{cout << "4 / 4 - 4 * 4 = " << x << endl;continue;}
		else if(4/4-4/4==x)
			{cout << "4 / 4 - 4 / 4 = " << x << endl;continue;}
		else if(4/4*4+4==x)
			{cout << "4 / 4 * 4 + 4 = " << x << endl;continue;}
		else if(4/4*4-4==x)
			{cout << "4 / 4 * 4 - 4 = " << x << endl;continue;}
		else if(4/4*4*4==x)
			{cout << "4 / 4 * 4 * 4 = " << x << endl;continue;}
		else if(4/4*4/4==x)
			{cout << "4 / 4 * 4 / 4 = " << x << endl;continue;}
		else if(4/4/4+4==x)
			{cout << "4 / 4 / 4 + 4 = " << x << endl;continue;}
		else if(4/4/4-4==x)
			{cout << "4 / 4 / 4 - 4 = " << x << endl;continue;}
		else if(4/4/4*4==x)
			{cout << "4 / 4 / 4 * 4 = " << x << endl;continue;}
		else if(4/4/4/4==x)
			{cout << "4 / 4 / 4 / 4 = " << x << endl;continue;}
		else
			cout << "no solution" << endl;
			
	}
	return 0;
}