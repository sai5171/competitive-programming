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
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define si(n) scanf("%d",&n);
//end input macros 
using namespace std;
int fun(int);
int fun(int x)
{
	while(x>9)
	x=x/10;
	return x;
} 
int main(){
	//ofstream fout ("a.ou");
	int n;
	cin >> n;
	int x=getchar();
	string s;
	int i;
	fr(i,0,n)
	{
		getline(cin,s);
		int j;
		//cout << s << endl;
		int v;
		cout << "Case #" << i+1 << ": ";
		fr(j,0,s.size())
		{
			int d1=fun(v);
			switch(s[j])
			{
				case 'a':v=2;break;
				case 'b':v=22;break;
                                case 'c':v=222;break;
                                case 'd':v=3;break;
                                case 'e':v=33;break;
                                case 'f':v=333;break;
                                case 'g':v=4;break;
                                case 'h':v=44;break;
                                case 'i':v=444;break;
                                case 'j':v=5;break;
                                case 'k':v=55;break;
                                case 'l':v=555;break;
                                case 'm':v=6;break;
                                case 'n':v=66;break;
                                case 'o':v=666;break;
                                case 'p':v=7;break;
                                case 'q':v=77;break;
                                case 'r':v=777;break;
                                case 's':v=7777;break;
                                case 't':v=8;break;
                                case 'u':v=88;break;
                                case 'v':v=888;break;
                                case 'w':v=9;break;
                                case 'x':v=99;break;
                                case 'y':v=999;break;
                                case 'z':v=9999;break;
                                case ' ':v=0;break;
			}
			int d2=fun(v);
			if(d1==d2)
			cout << " " << v;
			else
			cout << v;
		}
		cout <<endl;
	}	
	return 0;
}
