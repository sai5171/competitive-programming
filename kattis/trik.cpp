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
int main(){
    string s;
	getline(cin,s);
	int x=1,y=0,z=0;
	for(long long int i=0;i<s.size();i++)
	{
		if(s[i]=='A')
		{
			int temp;
			temp=x;
			x=y;
			y=temp;
		}
		else if(s[i]=='B')
		{
			int temp;
			temp=y;
			y=z;
			z=temp;
		}
		else//s[i]=='C'
		{
			int temp;
			temp=x;
			x=z;
			z=temp;
		}
	}
	if(x==1)
		cout << "1" << endl;
	else if(y==1)
		cout << "2" << endl;
	else //z==1
		cout << "3" << endl;
	
    return 0;
}