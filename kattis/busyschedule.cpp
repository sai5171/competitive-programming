#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			return 0;
		vector<int> a,p;
		int h,m,x;
		x=getchar();
		for(int i=0;i<n;i++)
		{
			cin >> h;
			x=getchar();
			cin >> m;
			x=getchar();
			x=getchar();
			h=(h*100)+m;
			if(x=='a')
				a.push_back(h);
			else
				p.push_back(h);
			x=getchar();
			x=getchar();
			x=getchar();
			x=getchar();
		}
		sort(a.begin(),a.end());
		sort(p.begin(),p.end());
		for(int i=0;i<a.size();i++)
		{
			if(a[i]>=1200)
			{
				int h,m;
				m=a[i]%100;
				h=a[i]/100;
				cout << h << ":" ;
				if(m<10)
					cout <<"0" << m;
				else
					cout << m;
				cout << " a.m.\n" ;
				//cout << a[i] <<endl;
			}
		}
		for(int i=0;i<a.size();i++)
		{
			if(a[i]<1200)
			{
				int h,m;
				m=a[i]%100;
				h=a[i]/100;
				cout << h << ":" ;
				if(m<10)
					cout <<"0" << m;
				else
					cout << m;
				cout << " a.m.\n" ;
			}
		}
		for(int i=0;i<p.size();i++)
		{
			if(p[i]>=1200)
			{
				int h,m;
				m=p[i]%100;
				h=p[i]/100;
				cout << h << ":" ;
				if(m<10)
					cout <<"0" << m;
				else
					cout << m;
				cout << " p.m.\n" ;
			}
		}
		for(int i=0;i<p.size();i++)
		{
			if(p[i]<1200)
			{
				int h,m;
				m=p[i]%100;
				h=p[i]/100;
				cout << h << ":" ;
				if(m<10)
					cout <<"0" << m;
				else
					cout << m;
				cout << " p.m.\n" ;
			}
		}
		cout << endl;
	}
	return 0;
}
