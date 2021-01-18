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
	while(getline(cin,s))
	{
		int check=0;
		string c1="problem";
		for(long long int i=0;i<s.size();i++)
		{
			int count=1;
			int temp=i;
			if(s[i]=='p' || s[i]=='P')
			{
				i++;
				if(s[i]=='r' || s[i]=='R')
					count++;
				i++;
				if(s[i]=='o' || s[i]=='O')
					count++;
				i++;
				if(s[i]=='B' || s[i]=='b')
					count++;
				i++;
				if(s[i]=='l' || s[i]=='L')
					count++;
				i++;
				if(s[i]=='e' || s[i]=='E')
					count++;
				i++;
				if(s[i]=='m' || s[i]=='M')
					count++;
			}
			i=temp;
			if(count==7)
			{
				check=1;
				break;
			}
			count=0;
		}
		if(check==1)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
    return 0;
}