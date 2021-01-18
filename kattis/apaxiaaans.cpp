#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <set>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=i+1;a[j]!='\0';j++)
		{
			if(a[i]!=a[j])
				break;
			else
			{
				a[j]='3';

			}
		}
	}
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]!='3')
			printf("%c",a[i]);
	}
	return 0;
}