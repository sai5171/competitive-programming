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
int main(){
	int n;
	cin >> n;
	int x=getchar();
	while(n--)
	{
		int a[26]={0};
		string s;
		getline(cin,s);
		for(int i=0;i<s.size();i++)
		{
			if(s[i]>=97 && s[i]<=122)
				a[s[i]-97]=1;
			else if(s[i]>=65 && s[i]<=90)
				a[s[i]-65]=1;	
		}
		int su=0;
		for(int i=0;i<26;i++)
			su+=a[i];
		if(su==26)
			{cout <<"pangram"<<endl;continue;}
		cout <<"missing ";
		for(int i=0;i<26;i++)
		{
			if(a[i]==0)
				printf("%c",i+97);
		}
		cout << endl;
	}
	return 0;
}
