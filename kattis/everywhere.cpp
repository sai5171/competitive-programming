#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <stdlib.h>
#include <string.h>
#include <string>
using namespace std;
int main()
{	
	int x;
	cin >> x;
	for(int i=0;i<x;i++)
	{
		set<string> s;
		int y;
		cin >> y;
		int dummy;
		dummy=getchar();
		for(int j=0;j<y;j++)
		{
			string z;
			getline(cin,z);
			s.insert(z);
		}
		printf("%d\n",(int)s.size());
	//	cout <<s.size()<<endl;
	}
	return 0;
}