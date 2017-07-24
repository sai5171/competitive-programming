#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,h;
	cin >> n >> h;
	vector<long long int> v;
	for(long long int i=0;i<n;i++)
	{
		long long int x;
		cin >> x;
		v.push_back(x);
	}
	long long int x,i=0;
	int carry=0;
	while(cin >> x && x!=0)
	{
		if(x==1)//move left
		{
			if(i==0)
				;
			else
				i--;
		}
		else if(x==2)//move right
		{
			if(i==n-1)
				;
			else
				i++;
		}
		else if(x==3)//pick up a box
		{
			if(carry==1)
				;
			else
			{
				if(v[i]==0)
					;
				else
				{
					v[i]--;
					carry=1;
				}
			}
		}
		else if(x==4)//drop a box
		{
			if(carry==0)
				;
			else
			{
				if(v[i]==h)
					;
				else
				{
					v[i]++;
					carry=0;
				}
			}
		}
	}
	for(i=0;i<v.size();i++)
		cout << v[i] << " ";
	return 0;
}
