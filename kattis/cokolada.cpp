//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	long long int n;
	cin >> n;
	long long int i=0;
	for(;;i++)
	{
		if(pow(2,i)<n)
			continue;
		else
			break;
	}
	i=pow(2,i);
	cout << i << " ";
	long long int bar=0,c_break=0;
	while(n!=0)
	{
		if(n<i)
		{
			i=i/2;
			c_break++;
		}
		else
		{
			n=n-i;
			i=i/2;
			c_break++;
		}
	}
	cout<< c_break-1 << endl;
	return 0;
}
