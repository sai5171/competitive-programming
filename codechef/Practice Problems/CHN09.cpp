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
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
//end input macros 
using namespace std;
int main(){
	long long int n;
	scanf("%lld",&n);
	getchar();
	while(n--)
	{
		string s;
		getline(cin,s);
		long long int ac=0,bc=0;
		for(long long int i=0;i<s.size();i++)
		{
			if(s[i]=='a')
				ac++;
			else 
				bc++;
		}
		if(ac<bc)
			cout << ac << endl;
		else
			cout << bc << endl;
	}
	return 0;
}
