#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <string.h>
using namespace std;
void rev(char ar[])
{
	int l=strlen(ar);
	//cout << ar << l ;
	for(int i=0;i<l/2;i++)
	{
		char x;
		x=ar[i];
		ar[i]=ar[l-i-1];
		ar[l-i-1]=x;
	}
	//cout << ar <<endl;
	return ;
}
char far(int x,char c)
{
//	cout << c << endl;
  char al[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','_','.'};
 int m;
  for(int i=0;al[i]!='\0';i++)
 {
	if(c==al[i])
		m=i;
 }	
//	cout <<m <<endl;
	m=(m+x)%28;
	return al[m];
}
int main(){
	int x=1;
	while(x!=0)
	{
		int d;
		cin >> x;
		if(x==0)
			break;
		d=getchar();
		char ar[100];
		cin >>ar;
		rev(ar);
		//cout << ar <<endl;	
		for(int i=0;ar[i]!='\0';i++)
		{
			ar[i]=far(x,ar[i]);
		}
		for(int i=0;ar[i]!='\0';i++)
			cout << ar[i];
			cout <<endl;
	}	
	return 0;
}