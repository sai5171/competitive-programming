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
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int sum=0;
		long long int x=2,y=2;
		while(x+y<=n)
		{
			x++;
			y++;
			sum++;
		}
		sum=((sum)*(sum+1))/2;
		cout << sum << endl;
	}
	return 0;
} 
