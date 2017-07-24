//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI 3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	while(n--)
	{
		long long int x;
		cin >> x;
		int ch=0;
		if(x<=1)
			{cout << "no" << endl;continue;}
		for(long long int i=2;i<=sqrt(x);i++)
		{
			if(x%i==0)
			{
				cout << "no" << endl;
				ch=1;
				break;
			}
		}
		if(ch==0)
			cout << "yes" << endl;
	}
} 
