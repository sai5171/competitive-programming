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
    long int n;
    cin >> n;
    int i;
    vector<int> v1,v2;
    fr(i,0,n)
    {
        int x;
        cin >> x;
        v1.pb(x);
        v2.pb(x);
    }
    int c=0;
    sort(v1.begin(),v1.end());
    if(equal(v1.begin(),v1.end(),v2.begin()))
        {cout << v1.size();return 0;}
    fr(i,0,n)
    {
        if(v1[i]==v2[i])
        {
            auto max=max_element(v2.begin(),v2.begin()+i+1);
            auto min=min_element(v2.begin()+i,v2.end());
            if((*max==*min)&&(*max==v2[i]))
                c++;
        }
    }
    cout << c ;
    return 0;
}