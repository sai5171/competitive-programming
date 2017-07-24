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
#define lli long long int
#define sflli(x) scanf("%lld",&x);
//end input macros
using namespace std;
int main(){
	lli l,w;
	while(cin >> l >> w && l!=0 && w!=0)
	{
		l--;
		w--;
		lli n;
		lli rx=0,ry=0,ax=0,ay=0;
		sflli(n);
		while(n--)
		{
			lli d,m;
			getchar();
			d=getchar();
			getchar();
			sflli(m);
			if(d=='u')
				rx+=m;
			else if(d=='d')
				rx-=m;
			else if(d=='l')
				ry-=m;
			else if(d=='r')
				ry+=m;
			if(d=='u')
			{
				ax+=m;
				if(ax>w)
					ax=w;
			}
			else if(d=='d')
			{
				ax-=m;
				if(ax<0)
					ax=0;
			}
			else if(d=='l')
			{
				ay-=m;
				if(ay<0)
					ay=0;
			}
			else if(d=='r')
			{
				ay+=m;
				if(ay>l)
					ay=l;
			}
		}
		printf("Robot thinks %lld %lld\n",ry,rx);
		printf("Actually at %lld %lld\n\n",ay,ax);
	}
	return 0;
}
