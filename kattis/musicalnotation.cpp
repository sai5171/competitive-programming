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
	vector<char> G,F,E,D,C,B,A,g,f,e,d,c,b,a;
	lli n;
	sflli(n);
	lli x;
	lli y;
	getchar();
	while(n--)
	{
		x=getchar();
		if(x=='G')
			{G.pb('*');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='F')
			{G.pb(' ');F.pb('*');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='E')
			{G.pb(' ');F.pb('-');E.pb('*');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='D')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('*');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='C')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb('*');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='B')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('*');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='A')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb('*');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='g')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('*');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='f')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb('*');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='e')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('*');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='d')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb('*');c.pb(' ');b.pb(' ');a.pb('-');}
		else if(x=='c')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb('*');b.pb(' ');a.pb('-');}
		else if(x=='b')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb('*');a.pb('-');}
		else if(x=='a')
			{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('*');}
		lli s=0;
		y=getchar();
		while(y!=' ' && y!='\n')
		{
			s=s*10+y-48;
			y=getchar();
		}
		while(s>1)
		{
			if(x=='G')
				{G.pb('*');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='F')
				{G.pb(' ');F.pb('*');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='E')
				{G.pb(' ');F.pb('-');E.pb('*');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='D')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('*');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='C')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb('*');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='B')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('*');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='A')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb('*');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='g')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('*');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='f')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb('*');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='e')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('*');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='d')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb('*');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='c')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb('*');b.pb(' ');a.pb('-');}
			else if(x=='b')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb('*');a.pb('-');}
			else if(x=='a')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('*');}
			s--;
		}
		if(y==' ')
		{
			if(x=='G')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='F')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='E')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='D')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='C')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='B')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='A')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='g')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='f')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='e')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='d')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='c')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='b')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
			else if(x=='a')
				{G.pb(' ');F.pb('-');E.pb(' ');D.pb('-');C.pb(' ');B.pb('-');A.pb(' ');g.pb('-');f.pb(' ');e.pb('-');d.pb(' ');c.pb(' ');b.pb(' ');a.pb('-');}
		}
	}
	cout << "G: " ;
	for(lli i=0;i<G.size();i++)
		cout << G[i];
	cout << endl;
	cout << "F: " ;
	for(lli i=0;i<F.size();i++)
		cout << F[i];
	cout << endl;
	cout << "E: " ;
	for(lli i=0;i<E.size();i++)
		cout << E[i];
	cout << endl;
	cout << "D: " ;
	for(lli i=0;i<D.size();i++)
		cout << D[i];
	cout << endl;
	cout << "C: " ;
	for(lli i=0;i<C.size();i++)
		cout << C[i];
	cout << endl;
	cout << "B: " ;
	for(lli i=0;i<B.size();i++)
		cout << B[i];
	cout << endl;
	cout << "A: " ;
	for(lli i=0;i<A.size();i++)
		cout << A[i];
	cout << endl;
	cout << "g: " ;
	for(lli i=0;i<g.size();i++)
		cout << g[i];
	cout << endl;
	cout << "f: " ;
	for(lli i=0;i<f.size();i++)
		cout << f[i];
	cout << endl;
	cout << "e: " ;
	for(lli i=0;i<e.size();i++)
		cout << e[i];
	cout << endl;
	cout << "d: " ;
	for(lli i=0;i<d.size();i++)
		cout << d[i];
	cout << endl;
	cout << "c: " ;
	for(lli i=0;i<c.size();i++)
		cout << c[i];
	cout << endl;
	cout << "b: " ;
	for(lli i=0;i<b.size();i++)
		cout << b[i];
	cout << endl;
	cout << "a: " ;
	for(lli i=0;i<a.size();i++)
		cout << a[i];
	cout << endl;
	return 0;
}
