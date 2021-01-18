#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <string.h>
#include <string>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main(){
	int d;
	cin >> d;
	int x=getchar();
	string s;
	getline(cin,s);
	int mc=0,wc=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='M')
			mc++;
		else if(s[i]=='W')
			wc++;
		if(abs(mc-wc)>d)
		{
			if(s[i]=='M')
				mc--;
			else if(s[i]=='W')
				wc--;
			if(s[i]==s[i+1])
				break;
			int t;
			t=s[i];
			s[i]=s[i+1];
			s[i+1]=t;
			if(s[i]=='M')
				mc++;
			else if(s[i]=='W')
				wc++;
		}
				
	}
	cout << mc+wc;
    return 0;
}
