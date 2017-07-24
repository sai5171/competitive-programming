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
	int t;
	cin >> t;
	while(t--)
	{
		int i;
		int n;
		cin >> n;
		vector<int> v,a;
		fr(i,0,20)
		{
			int x;
			cin >> x;
			v.pb(x);
			a.pb(x);
		}
		sort(a.begin(),a.end());
		int e=equal(v.begin(),v.end(),a.begin());	
		if(e==1)
			{cout << n << " 0" << endl;continue;} 
		int s=0;
		fr(i,0,20)
		{
			auto min=min_element(v.begin()+i,v.end());
			if(*min==v[i])
				;
			else
			{
				int temp;
				temp=(*min);
				v.erase(remove(v.begin(),v.end(),temp),v.end());
				v.insert(v.begin()+i,temp);
				s+=min-(v.begin()+i);
			}
		}	
		cout << n << " " << s <<endl;
	}
	return 0;
}