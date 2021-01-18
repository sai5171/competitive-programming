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
    long long int t;
    cin >> t;
    while(t--)
    {
		long long int i,n;
		cin >> n ;
		vector<long long int> v;
		long long int max=-1,pos=0;
		for(i=1;i<=n;i++)
		{
			long long int x;
			cin >> x;
			v.pb(x);
			if(max<x)
			{
				max=x;
				pos=i;
			}
		}
		long long int c=0,s=0;
		for(i=0;i<n;i++)
		{
			if(v[i]==max)
				c++;
			else
				s+=v[i];
		}
		if(c==1 && s<max)
			cout << "majority winner " << pos << endl;
		else if(c==1)
			cout << "minority winner " << pos << endl;
		else
			cout << "no winner\n";
	}
    return 0;
}
