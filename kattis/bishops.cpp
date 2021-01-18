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
    long long int x;
    while(cin >> x)
	{
		if(x==0)
			{cout << "0" << endl;continue;}
		if(x==1)
			{cout << "1" << endl;continue;}
		cout << x+(x-2) << endl;
	}
    return 0;
}
