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
    char a[10000],b[10000];
    scanf("%s",a);
    scanf("%s",b);
    int p=0;
    int i=0;
    for(i=0;b[i]!='\0';i++)
    {
		int j;
		for(j=p;a[j]!='\0' && b[i]!=a[j];j++);
		//cout << b[i] << " "<<a[j] <<" "<<p <<endl;
		if(b[i]==a[j] && j>p)
			break;
		if(b[i]==a[j])
			p++;
		if(p==strlen(a))
			{cout <<"PASS";return 0;}	
	}
	cout << "FAIL";
    return 0;
}
