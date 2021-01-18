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
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
//end input macros 
using namespace std;
int main(){
	int x;
	string s;
	int a=0,b=1001;
	do
	{
		x=((a+b)/2.0);
		cout << x << endl ;
		cin >> s;
		if(s=="lower")
			b=x;
		else
			a=x;
	}while(s!="correct");
	return 0;
}
