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
	int n,c;
	cin >> n >> c;
	int a[1000];
	a[0]=0;
	int i,s;
	for(i=1;i<=c;i++)
		scanf("%d",&a[i]);
	a[i]=n;
	s=i;
	set<int> v;
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<=s;j++)
			v.insert(a[j]-a[i]);
	}
	for(auto i=v.begin();i!=v.end();i++)
		cout <<*i << " ";
    return 0;
}
