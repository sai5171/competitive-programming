//header macros
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <string>
#include <cmath>
//end header macros
//input macros
#define fr(i,a,n) for(i=a;i<n;i++)
#define pb push_back
//end input macros 
using namespace std;
int main()
{
    string s;
    vector<int> v,a;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        int x;
        x=s[i]-48;
        v.push_back(x);
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    next_permutation(v.begin(),v.end());
    if(equal(v.begin(),v.end(),a.begin()))
        cout <<"0";
    else
        {
            for(int i=0;i<v.size();i++)
            {
                cout <<v[i];
            }
        }
    return 0;
}
