#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#define pb push_back
#define fr(i,a,n) for(i=a;i<n;i++)
using namespace std;
int main()
{
    long long int x,y;
    while(scanf("%Ld %Ld",&x,&y)==2)
    {
        if(x>y)
            cout <<x-y<<endl;
        else
            cout <<y-x<<endl;
    }
    return 0;
}