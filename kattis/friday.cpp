//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>
#include <cmath>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main(){
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n,d;
		cin >> n >> d;
		long long int count=0,s=0;
		while(d--)
		{
			long long int x;
			cin >> x;
			if(s==0 && x>=13)
				count++;
			s+=x%7;
			s=s%7;
		}
		cout << count << endl;
	}
	return 0;
}
