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
    long long int w,l,t=1;
    while(cin >> l >> w)
    {
		if(w==0 && l==0)
			break;
		long long int du=getchar();
		long long int  a[w][l];
		long long int x,y;
		for(long long int i=0;i<w;i++)
		{
			for(long long int j=0;j<l;j++)
			{
				du=getchar();
				a[i][j]=du;
				if(du=='*')
					{x=i;y=j;}
			}
			du=getchar();
		}
		int d;
		if(x==0)//up
		{	
			d=3;
		}
		else if(y==0)//left
		{
			d=1;
		}
		else if(x==w-1)//down
		{
			d=2;
		}
		else if (y==l-1)//right
		{
			d=0;
		}
		if(d==0)
			y--;
		else if(d==1)
			y++;
		else if(d==2)
			x--;
		else if(d==3)
			x++;
		while(1==1)
		{
			if(a[x][y]=='.')
			{	
				if(d==0)
					y--;
				else if(d==1)
					y++;
				else if(d==2)
					x--;
				else if(d==3)
					x++;
			}
			if(a[x][y]=='.')
				continue;
			if(a[x][y]=='x')
				{a[x][y]='&';break;}
			if(a[x][y]=='/')
			{
				if(d==0)
							{x++;d=3;}
				else if(d==1)
							{x--;d=2;}
				else if(d==2)
							{y++;d=1;}
				else if(d==3)
							{y--;d=0;}
			}
			else
			{
				if(d==0)
							{x--;d=2;}
				else if(d==1)
							{x++;d=3;}
				else if(d==2)
							{y--;d=0;}
				else if(d==3)
							{y++;d=1;}
			}
		}
		
		cout << "HOUSE " << t++ << endl;
		for(long long int i=0;i<w;i++)
		{
			for(long long int j=0;j<l;j++)
			{
					printf("%c",a[i][j]);
			}
			cout << endl;
		}
	}
    return 0;
}

