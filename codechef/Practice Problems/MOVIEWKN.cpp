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
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		vector<long long int> l,r;
		long long int temp=n;
		while(temp--)
		{
			long long int x;
			scanf("%lld",&x);
			l.push_back(x);
		}
		temp=n;
		while(temp--)
		{
			long long int x;
			scanf("%lld",&x);
			r.push_back(x);
		}
		long long int maxl=-1;
		long long int maxr=-1;
		long long int max=-1;
		long long int index=-1;
		for(long long int i=0;i<l.size();i++)
		{
			if(l[i]*r[i]>max)
			{
				max=l[i]*r[i];
				maxl=l[i];
				maxr=r[i];
				index=i+1;
			}
			else if(l[i]*r[i]==max)
			{
				if(r[i]>maxr)
				{
					maxl=l[i];
					maxr=r[i];
					index=i+1;
				}
			}
		}
		cout << index << endl;
	}
	return 0;
}
