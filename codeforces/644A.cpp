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
	long long int n,r,c;
	cin >> n >> r >> c;
	if((r*c)<n)
	{
		cout << "-1" << endl;
		return 0;
	}
	long long int a[r][c];
	long long int count=0;
	int dir=+1;
	for(long long int i=0;i<r;i++)
	{
		for(long long int j=0;j<c;j++)
			a[i][j]=0;
	}
	for(long long int i=0;i<r;i++)
	{
		if(dir==+1)
		{
			for(long long int j=0;j<c;j++)
			{
				count++;
				if(count==n+1)
					break;
				a[i][j]=count;
			}
			dir=-1;
		}
		else
		{
			for(long long int j=c-1;j>=0;j--)
			{
				count++;
				if(count==n+1)
					break;
				a[i][j]=count;
			}
			dir=+1;
		}
		if(count==n+1)
			break;
	}
	for(long long int i=0;i<r;i++)
	{
		for(long long int j=0;j<c;j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	return 0;
}
