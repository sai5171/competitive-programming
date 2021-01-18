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
	long long int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	long long int t;
	cin >> t;
	while(t--)
	{
		long long int n;
		cin >> n;
		long long int temp=n;
		long long int count=temp/2048;
		temp=temp%2048;
		for(int i=0;i<11;i++)
		{
			if(temp==0)
				break;
				
			if((temp&1)==1)
				count++;
			temp= temp >> 1;
		}
		
		cout << count << endl;
	}
	return 0;
} 
