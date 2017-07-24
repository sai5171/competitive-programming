#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main()
{
	//ofstream fout ("a.ou");
	long int t;
	cin >> t;
	for(long int k=0;k<t;k++)
	{
		long int n;
		cin >> n;
		vector<long int> v;
		while(n--)
		{
			long int x;
			cin >>x;
			v.pb(x);
		}
		sort(v.begin(),v.end());
		/*for(auto i=0;i<v.size();i++)
			fout << v[i]<< " ";	
		fout <<endl;*/	
		for(auto i=0;i<v.size();i++,i++)
		{		
			if(v[i]==v[i+1])
				;
			else
			{
				cout <<"Case #"<< k+1 <<": "<<  v[i] <<endl;
				break;
			}	
		}
	}
	return 0;
}