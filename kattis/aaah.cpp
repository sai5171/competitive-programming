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
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if(a.size()<b.size())
		cout << "no";
	else
		cout << "go";
	return 0;
}