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
	//ofstream fout ("a.ou");
	int x;
	int it=0;
	while((scanf("%d",&x)==1))
	{
		vector<int> v;
		for(int i=0;i<x;i++)
		{
			long long int d;
			cin >> d;
			v.pb(d);
		}
		auto max=max_element(v.begin(),v.end());
		auto min=min_element(v.begin(),v.end());
		it++;
		long long int diff;
		diff=(*max)-(*min);
		cout <<"Case " << it << ": "<< *min << " " << *max << " " << diff  <<endl;
	}
	return 0;
}