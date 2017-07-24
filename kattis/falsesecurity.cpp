//header macros
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>/*cout << setprecision (10) << fixed;*/
#include <fstream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <functional>
//end header macros
//input macros
# define PI	3.141592653589793238462643383279502884L
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
#define gcd __gcd
#define lli long long int
#define sflli(x) scanf("%lld",&x);
#define cin fin
#define cout fout
//end input macros
using namespace std;
int main(){
	ifstream fin ("a.in");
	ofstream fout ("a.ans");
	ios_base::sync_with_stdio(false);
	string s;
	while(getline(cin,s))
	{
		string s1;
		vector<long long int> v;
		for(long long int i=0;i<s.size();i++)
		{
			if(s[i]=='A')
				{s1.append(".-");v.pb(2);}
			else if(s[i]=='B')
				{s1.append("-...");v.pb(4);}
			else if(s[i]=='C')
				{s1.append("-.-.");v.pb(4);}
			else if(s[i]=='D')
				{s1.append("-..");v.pb(3);}
			else if(s[i]=='E')
				{s1.append(".");v.pb(1);}
			else if(s[i]=='F')
				{s1.append("..-.");v.pb(4);}
			else if(s[i]=='G')
				{s1.append("--.");v.pb(3);}
			else if(s[i]=='H')
				{s1.append("....");v.pb(4);}
			else if(s[i]=='I')
				{s1.append("..");v.pb(2);}
			else if(s[i]=='J')
				{s1.append(".---");v.pb(4);}
			else if(s[i]=='K')
				{s1.append("-.-");v.pb(3);}
			else if(s[i]=='L')
				{s1.append(".-..");v.pb(4);}
			else if(s[i]=='M')
				{s1.append("--");v.pb(2);}
			else if(s[i]=='N')
				{s1.append("-.");v.pb(2);}
			else if(s[i]=='O')
				{s1.append("---");v.pb(3);}
			else if(s[i]=='P')
				{s1.append(".--.");v.pb(4);}
			else if(s[i]=='Q')
				{s1.append("--.-");v.pb(4);}
			else if(s[i]=='R')
				{s1.append(".-.");v.pb(3);}
			else if(s[i]=='S')
				{s1.append("...");v.pb(3);}
			else if(s[i]=='T')
				{s1.append("-");v.pb(1);}
			else if(s[i]=='U')
				{s1.append("..-");v.pb(3);}
			else if(s[i]=='V')
				{s1.append("...-");v.pb(4);}
			else if(s[i]=='W')
				{s1.append(".--");v.pb(3);}
			else if(s[i]=='X')
				{s1.append("-..-");v.pb(4);}
			else if(s[i]=='Y')
				{s1.append("-.--");v.pb(4);}
			else if(s[i]=='Z')
				{s1.append("--..");v.pb(4);}
			else if(s[i]=='_')
				{s1.append("..--");v.pb(4);}
			else if(s[i]==',')
				{s1.append(".-.-");v.pb(4);}
			else if(s[i]=='.')
				{s1.append("---.");v.pb(4);}
			else if(s[i]=='?')
				{s1.append("----");v.pb(4);}
		}
		long long int i=0;
		for(;i<s1.size() && v.size()!=0;)
		{
			string s2;
			long long int x=v.back();
			v.pop_back();
			s2=s1.substr(i,x);
			i=i+x;
			if(s2==".-")
				cout << "A";
			else if(s2=="-...")
				cout << "B";
			else if(s2=="-.-.")
				cout << "C";
			else if(s2=="-..")
				cout << "D";
			else if(s2==".")
				cout << "E";
			else if(s2=="..-.")
				cout << "F";
			else if(s2=="--.")
				cout << "G";
			else if(s2=="....")
				cout << "H";
			else if(s2=="..")
				cout << "I";
			else if(s2==".---")
				cout << "J";
			else if(s2=="-.-")
				cout << "K";
			else if(s2==".-..")
				cout << "L";
			else if(s2=="--")
				cout << "M";
			else if(s2=="-.")
				cout << "N";
			else if(s2=="---")
				cout << "O";
			else if(s2==".--.")
				cout << "P";
			else if(s2=="--.-")
				cout << "Q";
			else if(s2==".-.")
				cout << "R";
			else if(s2=="...")
				cout << "S";
			else if(s2=="-")
				cout << "T";
			else if(s2=="..-")
				cout << "U";
			else if(s2=="...-")
				cout << "V";
			else if(s2==".--")
				cout << "W";
			else if(s2=="-..-")
				cout << "X";
			else if(s2=="-.--")
				cout << "Y";
			else if(s2=="--..")
				cout << "Z";
			else if(s2=="..--")
				cout << "_";
			else if(s2==".-.-")
				cout << ",";
			else if(s2=="---.")
				cout << ".";
			else if(s2=="----")
				cout << "?";
		}
		cout << endl;
	}
	return 0;
}
