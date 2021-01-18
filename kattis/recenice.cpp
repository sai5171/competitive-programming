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
	long long int n,tl=0;
	vector<string> v;
	cin >> n;
	while(n--)
	{
		string s;
		cin >> s;
		tl+=s.size();
		v.pb(s);
	}
	tl--;
	string s;
	if(tl==0)
		s=s+"zero";
	long long int temp=tl,val=0;
	int count=0;
	while(temp>0)
	{
		val=val*10+(temp%10);
		temp=temp/10;
		count++;
	}
	temp=val;
	while(count!=0)
	{
		int x=temp%10;
		temp=temp/10;
		if(count==3)
		{
			if(x==1)
				s=s+"onehundred";
			else if(x==2)
				s=s+"twohundred";
			else if(x==3)
				s=s+"threehundred";
			else if(x==4)
				s=s+"fourhundred";
			else if(x==5)
				s=s+"fivehundred";
			else if(x==6)
				s=s+"sixhundred";
			else if(x==7)
				s=s+"sevenhundred";
			else if(x==8)
				s=s+"eighthundred";
			else if(x==9)
				s=s+"ninehundred";
			count--;
		}
		else if(count==2)
		{
			if(x==1)
			{
				x=temp%10;
				temp=temp/10;
				if(x==0)
					s=s+"ten";
				else if(x==1)
					s=s+"eleven";
				else if(x==2)
					s=s+"twelve";
				else if(x==3)
					s=s+"thirteen";
				else if(x==4)
					s=s+"fourteen";
				else if(x==5)
					s=s+"fifteen";
				else if(x==6)
					s=s+"sixteen";
				else if(x==7)
					s=s+"seventeen";
				else if(x==8)
					s=s+"eighteen";
				else if(x==9)
					s=s+"nineteen";
				count--;
			}
			else if(x==2)
				s=s+"twenty";
			else if(x==3)
				s=s+"thirty";
			else if(x==4)
				s=s+"forty";
			else if(x==5)
				s=s+"fifty";
			else if(x==6)
				s=s+"sixty";
			else if(x==7)
				s=s+"seventy";
			else if(x==8)
				s=s+"eighty";
			else if(x==9)
				s=s+"ninety";
			count--;
		}
		else//count=0
		{
			
			if(x==1)
				s=s+"one";
			else if(x==2)
				s=s+"two";
			else if(x==3)
				s=s+"three";
			else if(x==4)
				s=s+"four";
			else if(x==5)
				s=s+"five";
			else if(x==6)
				s=s+"six";
			else if(x==7)
				s=s+"seven";
			else if(x==8)
				s=s+"eight";
			else if(x==9)
				s=s+"nine";
			count--;
		}
	}
	long long int store=tl;
	long long int len=s.size();
	//cout << tl;
	//cout << s;
	while(tl!=store-len)
	{
		store++;
		temp=store;
		val=0;
		count=0;
		while(temp>0)
		{
			val=val*10+(temp%10);
			temp=temp/10;
			count++;
		}
		temp=val;
		s="";
		//sai
		while(count!=0)
		{
			int x=temp%10;
			temp=temp/10;
			if(count==3)
			{
				if(x==1)
					s=s+"onehundred";
				else if(x==2)
					s=s+"twohundred";
				else if(x==3)
					s=s+"threehundred";
				else if(x==4)
					s=s+"fourhundred";
				else if(x==5)
					s=s+"fivehundred";
				else if(x==6)
					s=s+"sixhundred";
				else if(x==7)
					s=s+"sevenhundred";
				else if(x==8)
					s=s+"eighthundred";
				else if(x==9)
					s=s+"ninehundred";
				count--;
			}
			else if(count==2)
			{
				if(x==1)
				{
					x=temp%10;
					temp=temp/10;
					if(x==0)
						s=s+"ten";
					else if(x==1)
						s=s+"eleven";
					else if(x==2)
						s=s+"twelve";
					else if(x==3)
						s=s+"thirteen";
					else if(x==4)
						s=s+"fourteen";
					else if(x==5)
						s=s+"fifteen";
					else if(x==6)
						s=s+"sixteen";
					else if(x==7)
						s=s+"seventeen";
					else if(x==8)
						s=s+"eighteen";
					else if(x==9)
						s=s+"nineteen";
					count--;
				}
				else if(x==2)
					s=s+"twenty";
				else if(x==3)
					s=s+"thirty";
				else if(x==4)
					s=s+"forty";
				else if(x==5)
					s=s+"fifty";
				else if(x==6)
					s=s+"sixty";
				else if(x==7)
					s=s+"seventy";
				else if(x==8)
					s=s+"eighty";
				else if(x==9)
					s=s+"ninety";
				count--;
			}
			else//count=0
			{
				
				if(x==1)
					s=s+"one";
				else if(x==2)
					s=s+"two";
				else if(x==3)
					s=s+"three";
				else if(x==4)
					s=s+"four";
				else if(x==5)
					s=s+"five";
				else if(x==6)
					s=s+"six";
				else if(x==7)
					s=s+"seven";
				else if(x==8)
					s=s+"eight";
				else if(x==9)
					s=s+"nine";
				count--;
			}
		}
		len=s.size();
		//sai
	}
	for(auto i=v.begin();i!=v.end();i++)
	{
		if(*i=="$")
			cout << s << " ";
		else
			cout << *i << " ";
	}
	//cout << s;
	return 0;
}
