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
	string s1,s2;
	cin >> n;
	int x=getchar();
	while(n--)
	{
		getline(cin,s1);
		getline(cin,s2);
		cout << s1 << endl;
		cout << s2 << endl;
		for(long long int i=0;i<s1.size();i++)
		{
			if(s1[i]==s2[i])
				cout << ".";
			else
				cout << "*";
		}
		cout << endl << endl;
	}
	return 0;
}
