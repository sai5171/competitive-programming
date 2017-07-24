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
		long long int n,m;
		cin >> n;
		vector<long long int> v1,v2;
		long long int temp=n;
		while(temp--)
		{
			long long int x;
			cin >> x;
			v1.pb(x);
		}
		cin >> m;
		temp=m;
		while(temp--)
		{
			long long int x;
			cin >> x;
			v2.pb(x);
		}
		long long int count=0;
		int ch=0;
		for(auto i=0,j=0;i<v1.size();i++)
		{
			if(v1[i]==v2[j])
			{
				count++;
				j++;
			}
			if(count==m)
			{
				ch=1;
				break;
			}
		}
		if(ch==1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
} 
