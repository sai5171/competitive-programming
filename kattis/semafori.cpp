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
	long long int t,n;
	cin >> t >> n;
	long long int a[n][3],b[n][3];
	for(long long int i=0;i<t;i++)
	{
		long long int x,y,z;
		cin >> x >> y >> z;
		a[i][0]=x;
		a[i][1]=y;
		a[i][2]=z;
	}
	for(long long int i=0;i<t;i++)
	{
		b[i][0]=a[i][0];
		b[i][1]=a[i][1];
		b[i][2]=0;
	}
	long long int pos=0,sec=0;
	long long int i=0;
	while(i<t)
	{
		sec+=a[i][0]-pos;
		long long int j=0;
		while(j<t)
		{
			long long int diff=a[i][0]-pos;
			while(diff!=0)
			{
				if(b[j][2]==0)
				{
					if(diff-b[j][1]<=0)
					{
						b[j][1]=abs(diff-b[j][1]);
						diff=0;
					}
					else if(diff-b[j][1]>0)
					{
						diff=diff-b[j][1];
						b[j][1]=a[j][2];
						b[j][2]=1;
					}
				}
				else if(b[j][2]==1)
				{
					if(diff-b[j][1]<=0)
					{
						b[j][1]=abs(diff-b[j][1]);
						diff=0;
					}
					else if(diff-b[j][1]>0)
					{
						diff=diff-b[j][1];
						b[j][1]=a[j][1];
						b[j][2]=0;
					}
				}
			}
			j++;
		}
		while(b[i][2]!=1)
		{
			long long int j=0;
			sec++;
			while(j<t)
			{
				long long int diff=1;
				while(diff!=0)
				{
					if(b[j][2]==0)
					{
						if(diff-b[j][1]<=0)
						{
							b[j][1]=abs(diff-b[j][1]);
							diff=0;
						}
						else if(diff-b[j][1]>0)
						{
							diff=1;
							b[j][1]=a[j][2];
							b[j][2]=1;
						}
					}
					else if(b[j][2]==1)
					{
						if(diff-b[j][1]<=0)
						{
							b[j][1]=abs(diff-b[j][1]);
							diff=0;
						}
						else if(diff-b[j][1]>0)
						{
							diff=1;
							b[j][1]=a[j][1];
							b[j][2]=0;
						}
					}
				}
				j++;
			}
		}
		pos=a[i][0];
		i++;
	}
	sec+=(n-1)-pos;
	cout << sec << endl;
	return 0;
}
