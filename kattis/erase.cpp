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
//end input macros 
using namespace std;
int main(){
    int n;
    cin >> n;
    int x=getchar();
    char a[100000],b[100000],t[1000000];
    scanf("%s",a);
    scanf("%s",b);
    if(n%2==0)
	{
		if(strcmp(a,b)==0)
			cout <<"Deletion succeeded";
		else
			cout <<"Deletion failed";
	}
	else
	{	
		int i;
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]=='1')
				t[i]='0';
			else
				t[i]='1';
			
		}
		t[i]='\0';
		if(strcmp(b,t)==0)
			cout <<"Deletion succeeded";
		else
			cout <<"Deletion failed";
	}
    return 0;
}
